#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <limits>
#include <string>

using namespace std;

char game[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

int randomNumber(int maxNumber)
{
    srand((unsigned) time(NULL));
    return (rand() % maxNumber);
}

char selectMode()
{
    cout << "Please select game mode you want to play\n";
    cout << "0: ...\n";
    cout << "1: Play with friend\n";
    cout << "2: Play with computer\n";
    cout << "3: Play with super AI\n";
    cout << "You choose: ";
    string option;
    cin >> option;

    while (!(option[0] == '1' || option[0] == '2' || option[0] == '3' || option[0] == '0') || option.size() != 1)
    {
        cout << "Hmm.. I don't understand. Please select agian.\n";
        cout << "You select: ";
        cin >> option;
    }

    return option[0];
}

void modeZeroIntro()
{
    cout << "Enter the password: ";
    string password;
    cin >> password;
    if (password == "innovation")
    {
        cout << "Thanks for playing this game.\n";
        cout << "To be honest, you're not supposed to be here.\n";
        cout << "But if you are here, that means you have beaten the mode three.\n";
        cout << "Because of this happened, there was a bug in my code.\n";
        cout << "It would be so nice if you could help me figure this out.\n";
        cout << "After all, thanks for coming here.\n";
        cout << "Hasta luego.\n";
    }else 
        cout << "Hmm...I don't understand. Perhaps there is nothing wrong!?\n";
}

void displayBoard(char g[3][3])
{
    cout << " " << g[0][0] << " | " << g[0][1] << " | " << g[0][2] << "\n-----------\n";
    cout << " " << g[1][0] << " | " << g[1][1] << " | " << g[1][2] << "\n-----------\n";
    cout << " " << g[2][0] << " | " << g[2][1] << " | " << g[2][2] << "\n";
}

void displayBoard(char g[3][3], char place, char turn)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (g[i][j] == place)
            {
                g[i][j] = turn;
            }  

    cout << " " << g[0][0] << " | " << g[0][1] << " | " << g[0][2] << "\n-----------\n";
    cout << " " << g[1][0] << " | " << g[1][1] << " | " << g[1][2] << "\n-----------\n";
    cout << " " << g[2][0] << " | " << g[2][1] << " | " << g[2][2] << "\n";
}

bool checkInput(char g[3][3], char input)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (g[i][j] == input)
            {
                return true;
            }    
    return false;
}

bool checkEndGame(char g[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (g[i][j] != 'X' && g[i][j] != 'O')
            {
                return false;
            }    
    return true;
}

bool equals3(char a, char b, char c)
{
    return (a == b && b == c);
}

char checkWinner(char g[3][3])
{
    char winner = '\0';   // Tie
    // horizontal
    for (int i = 0; i < 3; i++)
    {
        if (equals3(g[i][0], g[i][1], g[i][2]))
        {
            winner = g[i][0];
            return winner;
        }
    }
    // vertical
    for (int i = 0; i < 3; i++)
    {
        if (equals3(g[0][i], g[1][i], g[2][i]))
        {
            winner = g[0][i];
            return winner;
        }
    }
    // diagnal
    if (equals3(g[0][0], g[1][1], g[2][2]))
    {
        winner = g[0][0];
        return winner;
    }
    if (equals3(g[0][2], g[1][1], g[2][0]))
    {
        winner = g[0][2];
        return winner;
    }
    return winner;
}

void modeOne() /* Play with friend */
{
    char game1[3][3];
    copy(&game[0][0], &game[0][0] + 9, &game1[0][0]);

    displayBoard(game1);
    cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
    string xPlace, oPlace;
    while (!checkEndGame(game1))
    {
        cout << "X: ";
        cin >> xPlace;
        while (!checkInput(game1, xPlace[0]) || xPlace.size() != 1)
        {
            cout << "Hmm.. I don't understand. Please choose agian.\n";
            cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
            cout << "X: ";
            cin >> xPlace;
        }
        displayBoard(game1, xPlace[0], 'X');
        
        if (checkWinner(game1) != '\0')
            break;

        if (checkEndGame(game1)) 
            break;

        cout << "O: ";
        cin >> oPlace;
        while (!checkInput(game1, oPlace[0]) || oPlace.size() != 1)
        {
            cout << "Hmm.. I don't understand. Please choose agian.\n";
            cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
            cout << "O: ";
            cin >> oPlace;
        }
        displayBoard(game1, oPlace[0], 'O');

        if (checkWinner(game1) != '\0')
            break;
    }

    if (checkWinner(game1) == 'X')
    {
        cout << "X WON\n";
    } else if (checkWinner(game1) == 'O')
    {
        cout << "O WON\n";
    } else
    {
        cout << "TIE\n";
    }

}

char checkGoFirst()
{
    cout << "Please select X (go first) or O.\n";
    cout << "1: X\n";
    cout << "2: O\n";
    cout << "You select: ";
    string response;
    cin >> response;
    while (response[0] != '1' && response[0] != '2' || response.size() != 1)
    {
        cout << "Hmm.. I don't understand. Please choose agian.\n";
        cout << "Please select X (go first) or O.\n";
        cout << "1: X\n";
        cout << "2: O\n";
        cout << "You select: ";       
        cin >> response;
    }
    return response[0];
}

char computerTurn(char g[3][3]) // <-- Outstanding...
{
    vector<char> gTemp;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (g[i][j] != 'X' && g[i][j] != 'O')
                gTemp.push_back(g[i][j]);
        
    char computer = gTemp[(randomNumber(gTemp.size()))];
    return computer;
}

void modeTwo() /* Play with computer */
{
    char game1[3][3], computer;
    string player;
    copy(&game[0][0], &game[0][0] + 9, &game1[0][0]);

    if (checkGoFirst() == '1')
    {
        cout << "==> You've selected X. Please go first\n";
        displayBoard(game1);
        while (!checkEndGame(game1))
        {
            /* Player Turn */ 
            cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
            cout << "X: ";
            cin >> player;

            while (!checkInput(game1, player[0]) || player.size() != 1)
            {
                cout << "Hmm.. I don't understand. Please choose agian.\n";
                cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
                cout << "X: ";
                cin >> player;
            }
            displayBoard(game1, player[0], 'X');

            if (checkWinner(game1) != '\0')
                break;

            if (checkEndGame(game1)) 
                break;
            /* Computer Turn */
            // computer = (randomNumber(9) + 1) + '0';
            // while (!checkInput(game1, computer))
            // {
            //     computer = (randomNumber(9) + 1) + '0';
            // }
            computer = computerTurn(game1);
            cout << "Computer Move...\n";
            cout << "O: " << computer << endl;
            displayBoard(game1, computer, 'O');

            if (checkWinner(game1) != '\0')
                break;
        }
        if (checkWinner(game1) == 'X')
        {
            cout << "YOU WON\n";
        } else if (checkWinner(game1) == 'O')
        {
            cout << "COMPUTER WON\n";
        } else
        {
            cout << "TIE\n";
        }
    } else
    {
        cout << "==> You've selected O. Computer will make the first move\n";
        computer = (randomNumber(9) + 1) + '0';
        cout << "Computer Move...\n";
        cout << "X: " << computer << endl;
        displayBoard(game1, computer, 'X');

        while (!checkEndGame(game1) || checkWinner(game1) != '\0')
        {
            cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
            cout << "O: ";
            cin >> player;

            while (!checkInput(game1, player[0]) || player.size() != 1)
            {
                cout << "Hmm.. I don't understand. Please choose agian.\n";
                cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
                cout << "O: ";
                cin >> player;
            }
            displayBoard(game1, player[0], 'O');

            if (checkWinner(game1) != '\0')
                break;

            if (checkEndGame(game1)) 
                break;

            // computer = (randomNumber(9) + 1) + '0';
            // while (!checkInput(game1, computer))
            // {
            //     computer = (randomNumber(9) + 1) + '0';
            // }
            computer = computerTurn(game1);
            cout << "Computer Move...\n";
            cout << "X: " << computer << endl;
            displayBoard(game1, computer, 'X');

            if (checkWinner(game1) != '\0')
                break;
        }

        if (checkWinner(game1) == 'X')
        {
            cout << "COMPUTER WON\n";
        } else if (checkWinner(game1) == 'O')
        {
            cout << "YOU WON\n";
        } else
        {
            cout << "TIE\n";
        }
    }
}

int evaluate(char g[3][3], char characterAI)
{ 
    if (characterAI == 'O')
    {
        if (checkWinner(g) == 'X')
            return -10;
        if (checkWinner(g) == 'O')
            return 10;
        else
            return 0;  
    } else
    {
        if (checkWinner(g) == 'X')
            return 10;
        if (checkWinner(g) == 'O')
            return -10;
        else
            return 0; 
    }
}

int minimax(char g[3][3], int depth, bool isMax, char characterAI)
{
    int score = evaluate(g, characterAI);

    if (score == 10 || score == -10)
        return score;
    if (checkEndGame(g) == true)
        return 0;

    if (isMax)
    {
        int best = numeric_limits<int>().min();
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (g[i][j] != 'X' && g[i][j] != 'O')
                {
                    char temp = g[i][j];
                    g[i][j] = characterAI;
                    best = max(best, minimax(g, depth + 1, false, characterAI));
                    g[i][j] = temp;
                }
            }
        }
        return best;
    } else
    {
        int best = numeric_limits<int>().max();
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (g[i][j] != 'X' && g[i][j] != 'O')
                {
                    char temp = g[i][j];
                    if (characterAI == 'X')
                        g[i][j] = 'O';
                    else
                        g[i][j] = 'X';
                    best = min(best, minimax(g, depth + 1, true, characterAI));
                    g[i][j] = temp;
                }
            }
        }
        return best;
    }
}

char findBestMove(char g[3][3], char characterAI)
{
    int bestVal = numeric_limits<int>().min();
    char bestMove;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (g[i][j] != 'X' && g[i][j] != 'O')
            {
                char temp = g[i][j];
                g[i][j] = characterAI;
                int moveVal = minimax(g, 0, false, characterAI);
                g[i][j] = temp;
                if (moveVal > bestVal)
                {
                    bestVal = moveVal;
                    bestMove = temp;
                }
            }
        }
    }
    return bestMove;
}

void modeThree() /* Play with super AI */
{
    char game1[3][3], computer;
    string player;
    copy(&game[0][0], &game[0][0] + 9, &game1[0][0]);

    if (checkGoFirst() == '1')
    {
        cout << "==> You've selected X. Please go first\n";
        displayBoard(game1);
        while (!checkEndGame(game1))
        {
            /* Player Turn */ 
            cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
            cout << "X: ";
            cin >> player;

            while (!checkInput(game1, player[0]) || player.size() != 1)
            {
                cout << "Hmm.. I don't understand. Please choose agian.\n";
                cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
                cout << "X: ";
                cin >> player;
            }
            displayBoard(game1, player[0], 'X');

            if (checkWinner(game1) != '\0')
                break;

            if (checkEndGame(game1)) 
                break;
            /* Computer Turn*/
            computer = findBestMove(game1, 'O');
            cout << "Computer Move...\n";
            cout << "O: " << computer << endl;
            displayBoard(game1, computer, 'O');

            if (checkWinner(game1) != '\0')
                break;
        }
        if (checkWinner(game1) == 'X')
        {
            cout << "YOU WON\n";
            cout << "Password: innovation\n";
        } else if (checkWinner(game1) == 'O')
        {
            cout << "AI WON\n";
        } else
        {
            cout << "TIE\n";
        }
    } else 
    {
        cout << "==> You've selected O. Computer will make the first move\n";
        computer = findBestMove(game1, 'X');
        cout << "Computer Move...\n";
        cout << "X: " << computer << endl;
        displayBoard(game1, computer, 'X');

        while (!checkEndGame(game1) || checkWinner(game1) != '\0')
        {
            cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
            cout << "O: ";
            cin >> player;

            while (!checkInput(game1, player[0]) || player.size() != 1)
            {
                cout << "Hmm.. I don't understand. Please choose agian.\n";
                cout << "Select a number from 1 - 9 on the board to make your move (e.g X: 3).\n";
                cout << "O: ";
                cin >> player;
            }
            displayBoard(game1, player[0], 'O');

            if (checkWinner(game1) != '\0')
                break;

            if (checkEndGame(game1)) 
                break;

            computer = findBestMove(game1, 'X');
            cout << "Computer Move...\n";
            cout << "X: " << computer << endl;
            displayBoard(game1, computer, 'X');

            if (checkWinner(game1) != '\0')
                break;
        }

        if (checkWinner(game1) == 'X')
        {
            cout << "AI WON\n";
        } else if (checkWinner(game1) == 'O')
        {
            cout << "YOU WON\n";
            cout << "Password: innovation\n";
        } else
        {
            cout << "TIE\n";
        }
    }
}

int main(void)
{                    
    cout << "[[[ Tic - Tac - Toe ]]]" << endl;
    char option = selectMode();
    
    switch (option)
    {
    case '1':
        cout << "==> You've selected mode one.\n";
        modeOne();
        break;
    case '2':
        cout << "==> You've selected mode two.\n";
        modeTwo();
        break;
    case '3':
        cout << "==> You've selected mode three.\n";
        modeThree();
        break;
    case '0':
        modeZeroIntro();
        break;
    }

    system("Pause");
    return 0;
}