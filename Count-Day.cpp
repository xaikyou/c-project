#include <iostream>
#include <vector>
using namespace std;

vector<int> a1 = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<int> a2 = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool checkValid(string input, bool lastCheck)
{
    if (lastCheck == false) return false;
    for (int i = 0; i < input.size(); i++)
        if (input[i] < '0' || input[i] > '9')
            return false;
    return true;
}

bool checkDay(int day, bool lastCheck)
{
    if (lastCheck == false) return false;
    if (day > 31 || day < 0) return false;
    return true;
}

bool checkMonth(int month, bool lastCheck)
{
    if (lastCheck == false) return false;
    if (month > 12 || month < 0) return false;
    return true;
}

bool checkValidDate(int day, int month, int year)
{
    vector<int> m1 = {4,6,9,11};
    if (month == 2)
        if (year % 4 != 0 && day > 28)
            return false;
        if (year % 4 == 0 && day > 29)
            return false;
    for (auto m : m1)
        if (month == m && day > 30) return false; 
    return true;
}

int main()
{
    string sday1, smonth1, syear1, sday2, smonth2, syear2;
    bool check = true;
    
    cout << "----- COUNT DAY -----\n";
    cout << "Start Date\n";
    cout << "\tEnter day   : ";
    cin >> sday1;    check = checkValid(sday1, check);
    cout << "\tEnter month : ";
    cin >> smonth1;  check = checkValid(smonth1, check);
    cout << "\tEnter year  : ";
    cin >> syear1;   check = checkValid(syear1, check);

    cout << "End Date\n";
    cout << "\tEnter day   : ";
    cin >> sday2;    check = checkValid(sday2, check);
    cout << "\tEnter month : ";
    cin >> smonth2;  check = checkValid(smonth2, check);
    cout << "\tEnter year  : ";
    cin >> syear2;   check = checkValid(syear2, check);

    if (check == false) 
    {
        cout << "Input Unvalid...";
        return 0;
    }

    int day1, month1, year1, day2, month2, year2;
    day1 = stoi(sday1); check = checkDay(day1, check);
    month1 = stoi(smonth1); check = checkMonth(month1, check);
    year1 = stoi(syear1); check = checkValidDate(day1, month1, year1);
    day2 = stoi(sday2); check = checkDay(day2, check);
    month2 = stoi(smonth2); check = checkMonth(month2, check);
    year2 = stoi(syear2); check = checkValidDate(day2, month2, year2);

    if (check == false) 
    {
        cout << "Input Unvalid...";
        return 0;
    }

    vector<int> a;
    int result = 0, year = year1, month = month1;
    int n = year2 - year1 + 1;
    for (int y = 0; y < n; ++y)
    {
        if (year % 4 == 0) a = a2;
        else a = a1;
        if (year != year2)
            while (month <= 12)
            {
                result = result + a[month];
                month++;
            }
        else
            while (month <= month2)
            {
                if (month == month2) 
                {
                    result += (day2 - day1);
                    break;
                }
                result = result + a[month];
                month++;
            }
        year += 1;
        month = 1;
    }
    cout << "\nResult: " << result << " days (not including the first day)\n";
    cout << "\nAlternative time units:\n";
    cout << "\t" << result * 24 * 60 * 60 << " seconds\n";
    cout << "\t" << result * 24 * 60 << " minutes\n";
    cout << "\t" << result * 24 << " hours\n";
    cout << "\t" << result << " days\n";
    if (result % 7 != 0) cout << "\t" << result / 7 << " weeks and " << result % 7 << " days\n";
    else cout << "\t" << result / 7 << " weeks\n";
    if (n > 0) cout << "\t" << float(result) * 100 / 365 << "% of a common year (365 days)\n";
    else cout << "\t" << float(result) * 100 / 365 << "% of " << year2 << endl;
    system("pause");
    return 0;
}