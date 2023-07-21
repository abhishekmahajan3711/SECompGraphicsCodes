// Write a C++ program to implement the game Tic Tac Toe. Apply the concept of 
// polymorphism.

#include <iostream>
using namespace std;
class Tic
{
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char play = 'X';

public:
    void display()
    {
        cout << '\n';
        for (int i = 0; i < 3; i++)
        {
            cout << "\t";
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j];
                cout << " ";
            }
            cout << endl;
        }
    }

    void toggle()
    {
        if (play == 'X')
        {
            play = 'Y';
        }
        else
        {
            play = 'X';
        }
    }

    void enter_value()
    {
        int n;
        while (true)
        {
            cout << "Turn of player " << play << endl;
            cout << "Enter number : ";
            cin >> n;
            if (n == 1)
            {
                if (board[0][0] == 'X' || board[0][0] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[0][0] = play;
                    break;
                }
            }
            if (n == 2)
            {
                if (board[0][1] == 'X' || board[0][1] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[0][1] = play;
                    break;
                }
            }

            if (n == 3)
            {
                if (board[0][2] == 'X' || board[0][2] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[0][2] = play;
                    break;
                }
            }
            if (n == 4)
            {
                if (board[1][0] == 'X' || board[1][0] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[1][0] = play;
                    break;
                }
            }
            if (n == 5)
            {
                if (board[1][1] == 'X' || board[1][1] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[1][1] = play;
                    break;
                }
            }

            if (n == 6)
            {
                if (board[1][2] == 'X' || board[1][2] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[1][2] = play;
                    break;
                }
            }

            if (n == 7)
            {
                if (board[2][0] == 'X' || board[2][0] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[2][0] = play;
                    break;
                }
            }

            if (n == 8)
            {
                if (board[2][1] == 'X' || board[2][1] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[2][1] = play;
                    break;
                }
            }

            if (n == 9)
            {
                if (board[2][2] == 'X' || board[2][2] == 'Y')
                {
                    cout << "Place is already filled ";
                }
                else
                {
                    board[2][2] = play;
                    break;
                }
            }
        }
    }

    int win()
    {

        if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
        {
            cout << "X wins !!!!!!";
            return 1;
        }

        if (board[0][0] == 'Y' && board[1][0] == 'Y' && board[2][0] == 'Y')
        {
            return 1;
            cout << "Y wins !!!!!!";
        }
        else if (board[0][1] == 'Y' && board[1][1] == 'Y' && board[2][1] == 'Y')
        {
            return 1;
            cout << "Y wins !!!!!!";
        }
        else if (board[0][2] == 'Y' && board[1][2] == 'Y' && board[2][2] == 'Y')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[0][0] == 'Y' && board[0][1] == 'Y' && board[0][2] == 'Y')
        {
            cout << "X wins !!!!!!";
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[1][0] == 'Y' && board[1][1] == 'Y' && board[1][2] == 'Y')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[2][0] == 'Y' && board[2][1] == 'Y' && board[2][2] == 'Y')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else if (board[0][0] == 'Y' && board[1][1] == 'Y' && board[2][2] == 'Y')
        {
            cout << "X wins !!!!!!";

            return 1;
        }
        else if (board[0][2] == 'Y' && board[1][1] == 'Y' && board[2][0] == 'Y')
        {
            cout << "X wins !!!!!!";
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Tic a1;
    char b;
    do
    {
        a1.toggle();
        a1.display();
        a1.enter_value();
        b = a1.win();
    } while (b == 0);

    return 0;
}