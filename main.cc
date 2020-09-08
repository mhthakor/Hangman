#include <iostream>
#include "board.h"
#include "tile.h"
using namespace std;

int main()
{
    char p1Symbol;
    char p2Symbol;
    Board ticTacBoard;

    cout << "Welcome to Tic-Tac-Toe!" << endl;
    cout << "Player 1, please enter your choice of symbol O/X for the game: ";
    cin >> p1Symbol;

    while (cin.fail() || ((p1Symbol != 'X') && (p1Symbol != 'O')))
    {
        cout << "Player 1 please enter X or O as your designated symbol ";
        cin >> p1Symbol;
    }

    cout << "Player 2, please enter your choice of symbol O/X for the game: ";
    cin >> p2Symbol;

    while (cin.fail() || ((p2Symbol != 'X') && (p2Symbol != 'O')))
    {
        cout << "Player 2 please enter X or O as your designated symbol ";
        cin >> p2Symbol;
    }

    cout << ticTacBoard;
}