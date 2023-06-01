#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque> 
/* similar syntax to vector, but not only it have the ability to push_back, it has push_front as well */

using namespace std;

/*
- Vector is saved in heap, and it doesn't need a size element in function
- Caleb generally just use Vector for everything unless there's a specific reason he need to use an array
*/

template <typename T>
void print(T collections, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << collections[i] << endl;
    }
    
}

void printSTDVector(vector<string> items)
{
    for (auto item : items)
    {
        cout << item << endl;
    }
}

int main()
{
    string foods[] = {"graphs", "oranges", "apples"};
    // foods.pop_back(); // take the last element out
    // printSTDVector(foods);

    // foods.push_back("avocado");
    // printSTDVector(foods);

    print(foods, sizeof(foods)/sizeof(foods[0]));

    deque<string> foods1 = {"graphs", "oranges", "apples"};
    foods1.push_front("grapefruit");
    print(foods1, foods1.size());

    system("Pause");
    return 0;
}