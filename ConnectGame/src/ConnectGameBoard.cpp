#include "ConnectGameBoard.h"
#include <iostream>
using namespace std;

ConnectGameBoard::ConnectGameBoard()
{
	chip_count = 0;
	max_moves = 0;
	winning_number = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			game_board[i][j] = 0;
		}
	}
}

void ConnectGameBoard::printArray()
{
	for (int i = 5; i >=0; i--)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << game_board[i][j] << "	";
		}
		cout << endl;
		cout << endl;
		cout << endl;
	}
}

void ConnectGameBoard::makeMove(int player, int column)
{
	int row_choice = 0;
	int column_choice = column - 1;

	while (game_board[row_choice][column_choice] != 0)
	{
		row_choice++;
	}

	if (row_choice > 5 || column_choice > 6)
		cout << "Invalid Move!" << endl;
	else
		game_board[row_choice][column_choice] = player;
}

bool ConnectGameBoard::is_game_over(int player)
{
	if (is_up_down(player) || is_left_right(player) || is_diagonal(player))
	{
		return true;
	}
	else
	{
		return false;
	}
}
