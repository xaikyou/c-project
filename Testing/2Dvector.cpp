#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<vector<int>> board = {{1, 2}, {4, 5}, {7, 8}, {7, 8}};
    cout << board[0].size() << endl; // col
    cout << board.size() << endl; // row

    board.push_back({1, 3});

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}