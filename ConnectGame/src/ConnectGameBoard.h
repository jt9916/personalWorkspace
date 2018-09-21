#ifndef CONNECTGAMEBOARD_H_
#define CONNECTGAMEBOARD_H_

class ConnectGameBoard
{
	public:
		ConnectGameBoard();
		void printArray();
		void makeMove(int player, int column);
		bool is_up_down(int player){return false;}
		bool is_left_right(int player){return false;}
		bool is_diagonal(int player){return false;}
		bool is_game_over(int player);
	private:
		int game_board[6][7];
		int chip_count;
		int max_moves;
		int winning_number;
};

#endif /* CONNECTGAMEBOARD_H_ */
