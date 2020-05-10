// MiscProblems.cpp : Defines the entry point for the application.
//

#include "TicTac.h"
#include <vector>

using namespace std;

/*
TicTacToe program
*/
vector<vector<int>> board;
bool isPlayerXTurn = true;
bool isGameCompleted = true;

void InitializeBoard(int size)
{
	board.clear();
	vector<vector<int>> temp(size, vector<int>(size, 0));
	board = std::move(temp);

	cout << "Board size is " << size << endl;
	cout << "Player X starts the game" << endl;
	isPlayerXTurn = true;
	isGameCompleted = false;
}

void PrintBoard()
{
	for (int i = 0; i < board.size(); i++)
	{
		cout << "-------";
	}
	cout << endl;
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board.size(); j++)
		{
			cout << "|  " << Value(board[i][j]) << "  |";
		}
		cout << endl;
		for (int j = 0; j < board.size(); j++)
		{
			cout << "-------";
		}
		cout << endl;
	}
}

char Value(int value)
{
	if (value == 0)
		return ' ';
	else if (value == 1)
		return 'X';
	else if (value == -1)
		return 'O';
	else
		return '-';
}

void MarkPositon(int row, int column)
{
	if (row >= board.size() || column >= board.size())
	{
		cout << " Cannot Mark Invalid positon" << endl;
		return;
	}
	if (board[row][column] != 0)
	{
		cout << "Selected position is already marked" << endl;
		return;
	}
	else
	{
		if (isPlayerXTurn)
			board[row][column] = 1;
		else
			board[row][column] = -1;
		Evaluate();
		isPlayerXTurn = isPlayerXTurn ? false : true;
	}
}

void Evaluate()
{
	//Evaluate rows, columns and two diagonals
	int winvalue = board.size();
	int rowCalculate = 0;
	int colCalculate = 0;
	int diag1 = 0;
	int diag2 = 0;
	for (int i = 0; i < board.size(); i++)
	{
		diag1 = diag1 + board[i][i];
		diag2 = diag2 + board[i][board.size() - i - 1];

		for (int j = 0; j < board.size(); j++)
		{
			rowCalculate = rowCalculate + board[i][j];
			colCalculate = colCalculate + board[j][i];
		}
		if ((rowCalculate == winvalue) || (rowCalculate == -winvalue) || (colCalculate == winvalue) || (colCalculate == -winvalue))
		{
			isGameCompleted = true;
			break;
		}
		rowCalculate = 0;
		colCalculate = 0;
	}
	if ((diag1 == winvalue) || (diag1 == -winvalue) || (diag2 == winvalue) || (diag2 == -winvalue))
		isGameCompleted = true;

	PrintBoard();
	if (isGameCompleted)
	{
		char player = isPlayerXTurn ? 'X' : 'O';
		cout << "Player " << player << " wins the game" << endl;
		board.clear();
	}
}

int main()
{
	InitializeBoard(3);
	while (!isGameCompleted)
	{
		char currentPlayer = isPlayerXTurn ? 'X' : '0';
		cout << "Player " << currentPlayer << " turn" << endl;
		cout << "Enter row" << endl;
		int row, column;
		cin >> row;
		cout << "Enter Column" << endl;
		cin >> column;
		MarkPositon(row, column);
	}
	return 0;
}
