#include <iostream>
#include <stdlib.h>

using namespace std;

char board[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

int choice;
int row, column;
char turn = 'X';
bool draw = false;


void display_board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
}
char getOpposite(char turn)
{
    if (turn == 'X')
        return 'O';
    else
        return 'X';
}

bool isWin()
{
    if (turn == 'X' && board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'X' && board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'X' && board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'X' && board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'X' && board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'X' && board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'X' && board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'X' && board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
    {
        cout << "X is winner\n";
        return true;
    }
    if (turn == 'O' && board[0][0] == 'O' && board[0][1] == '0' && board[0][2] == '0')
    {
        cout << "O is winner\n";
        return true;
    }
    if (turn == 'O' && board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
    {
        cout << "O is winner\n";
        return true;
    }
    if (turn == 'O' && board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
    {
        cout << "O is winner\n";
        return true;
    }
    if (turn == 'O' && board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
    {
        cout << "O is winner\n";
        return true;
    }
    if (turn == 'O' && board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
    {
        cout << "O is winner\n";
        return true;
    }
    if (turn == 'O' && board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
    {
        cout << "O is winner\n";
        return true;
    }
    if (turn == 'O' && board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        cout << "O is winner\n";
        return true;
    }
    if (turn == 'O' && board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
    {
        cout << "O is winner\n";
        return true;
    }
    return false;
}
    int main()
    {
        for (int i = 0; i < 9; i++)
        {
            int xPos, yPos;
            cout << "Its " << turn << " chance" << endl;
        retry:
            cout << "Enter x and y: ";
            cin >> xPos >> yPos;
            if (board[xPos][yPos] != '-')
            {
                cout << "enter valid position\n";
                goto retry;
            }
            else
                board[xPos][yPos] = turn;
            if (isWin())
                break;
            turn = getOpposite(turn);
            display_board();
        }
    }