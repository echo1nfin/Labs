#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

const int boardSize = 8;

// Функция для печати доски
void printBoard(int board[boardSize][boardSize], ofstream& output)
{
    output << "------------------------------------------------------------" << endl;
    for (int i = 0; i < boardSize; ++i)
    {
        for (int j = 0; j < boardSize; ++j)
        {
            if (board[i][j] == 0)
            {
                output << '.' << '\t';
            }
            else if (board[i][j] == 1)
            {
                output << 'Q' << '\t';
            }
        }
        output << endl;
        output << endl;
    }
    output << "------------------------------------------------------------" << endl;
}

// Функция для проверки, безопасно ли разместить ферзя в заданной позиции (row, col)
bool isSafe(int board[boardSize][boardSize], int row, int col)
{
    // Проверяем вертикальные линии
    for (int i = 0; i < row; ++i)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }

    // Проверяем главную диагональ
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    // Проверяем побочную диагональ
    for (int i = row, j = col; i >= 0 && j < boardSize; --i, ++j)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}

// Рекурсивная функция для нахождения всех возможных расстановок ферзей на доске
void solveNQueens(int board[boardSize][boardSize], int row, ofstream& output)
{
    if (row == boardSize)
    {
        // Если достигнут конец доски, выводим текущую расстановку
        printBoard(board, output);
    }

    for (int col = 0; col < boardSize; ++col)
    {
        if (isSafe(board, row, col))
        {
            board[row][col] = 1;
            solveNQueens(board, row + 1, output);
            board[row][col] = 0; // Сбрасываем позицию ферзя для следующей итерации
        }
    }
}

int main()
{
    ofstream output("fb.txt");

    int board[boardSize][boardSize] = {0}; // Инициализируем доску нулями

    solveNQueens(board, 0, output);

    output.close();
    return 0;
}
