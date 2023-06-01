#include <iostream>
#include <vector>

using namespace std;

void doSomething(const vector<vector<int>> array)
{
    
}

void printArray(const vector<vector<int>> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[0].size(); j++)
        {
            //array[i][j] ++; 
            /* When you pass an array to a function, it decays to a pointer, the same memory
            is accessible and changable */
            /* So if you don't want the original array change, use const 
            and by that, the line 12 is error cuz it violate the rule */
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    doSomething(array);
}

int main(void)
{
    vector<vector<int>> board = {{1, 2}, {4, 5}, {7, 8}};
    cout << board[0].size() << endl; // col
    cout << board.size() << endl; // row

    board.push_back({1, 3});
    printArray(board);
    
    
    return 0;
}