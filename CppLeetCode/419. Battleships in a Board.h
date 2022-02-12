//Runtime: 4 ms, faster than 97.89 % of C++ online submissions for Battleships in a Board.
//Memory Usage: 8.1 MB, less than 49.16 % of C++ online submissions for Battleships in a Board.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int countBattleships(vector<vector<char>>& board)
	{
		int res = 0;
		int m = board.size();
		int n = board[0].size();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (board[j][i] == 'X')
				{
					findone(board, i, j);
					res++;
				}
			}
		}

		return res;
	}

	void findone(vector<vector<char>>& board, int i_, int j_)
	{
		int m = board.size();
		int n = board[0].size();

		for (int i = i_; i < n; i++)
		{
			if (board[j_][i] == 'X')
			{
				board[j_][i] = '.';
			}
			else
			{
				break;
			}
		}
		for (int j = j_ + 1; j < m; j++)
		{
			if (board[j][i_] == 'X')
			{
				board[j][i_] = '.';
			}
			else
			{
				break;
			}
		}
	}
};