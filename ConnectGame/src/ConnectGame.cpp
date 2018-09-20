//============================================================================
// Name        : ConnectGame.cpp
// Author      : Jeremy Taylor
// Version     : 1.0
// Description : Connect Game
//============================================================================

#include <iostream>
#include "ConnectGameBoard.h"
using namespace std;

int main()
{
	string player_1;
	string player_2;
	int col_1;
	int col_2;
	ConnectGameBoard new_game;
	cout << "Welcome to Jeremy's Connect Game!" << endl;
	cout << endl;

	/* 	IF THERE IS AI PLAYER, THEY WILL NOT ENTER A NAME AND BE GIVEN CONSTANT NAME EX: AI PLAYER*/
	cout << "Player 1, Enter Your Name: " << endl;
	cin >> player_1;
	cout << "Player 2, Enter Your Name: " << endl;
	cin >> player_2;
	cout << endl;

	cout << player_1 << " , you are chip number 1!" << endl;
	cout << player_2 << " , you are chip number 2!" << endl;
	cout << endl;

	new_game.printArray();

	/*
	 * make 2 loops that check is player 1 is a winner then if player 2 is a winner....check after each move for each player
	 */

	while (!new_game.is_game_over(1) || !new_game.is_game_over(2))
	{
		cout << player_1 << " , Choose Column: " << endl;
		cin >> col_1;
		new_game.makeMove(1, col_1);
		cout << endl;
		new_game.printArray();
		cout << player_2 << " , Choose Column: " << endl;
		cin >> col_2;
		new_game.makeMove(2, col_2);
		cout << endl;
		new_game.printArray();
	}
}
