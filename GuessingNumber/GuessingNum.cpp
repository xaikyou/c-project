#include <iostream>
#include <string>
#include "randNum.h"

using namespace std;

bool playGame()
{
    cout << "You have 7 times to guess\n";
    cout << "The number you have to guess will be generated from 0 to 100\n";
    cout << "Good luck!\n";
    int guessedNumber = randomNumber(100);
    int guessCount = 7;
    int playerGuess;
    
    while (guessCount > 0)
    {
        cout << "Your guess is: ";
        cin >> playerGuess;
        guessCount --;
        if (playerGuess == guessedNumber)
        {
            cout << "Congrats, you won!!!\n";
            return true;
        } else if (playerGuess < guessedNumber)
        {
            cout << "Too low mate...\n";
            cout << "You still have " << guessCount << " times to guess\n";
        } else
        {
            cout << "Too high mate...\n";
            cout << "You still have " << guessCount << " times to guess\n";
        }
    }
    return false;
}

int main() { 
    cout << "What is your name?\n";
    string name;
    cin >> name;
    cout << "Your name is " << name <<".\n";

    cout << "Wanna play a game, " << name << " (y/n)?\n";
    char response;
    cin >> response;
    char responseFiltered = tolower(response);
    cout << "You entered: " << char(response) << endl;
    if (responseFiltered == 'y')
    {
        cout << "Let's play NUMBER GUESSING GAME!!!\n";
        bool won = playGame();
        if (!won)
        {
            cout << "Haha you're so bad. Learn Binary Search and comeback LOL\n";
        }
    } else if (responseFiltered == 'n')
    {
        cout << "Oops, see you next time.\n";
    } else
    {
        cout << "Hmm...I don't understand\n";
    }
    system("Pause");
    return 0;
}