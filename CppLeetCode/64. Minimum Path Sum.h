//Runtime: 7 ms, faster than 90.94 % of C++ online submissions for Minimum Path Sum.
//Memory Usage: 10.1 MB, less than 42.46 % of C++ online submissions for Minimum Path Sum.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int minPathSum(vector<vector<int>>& grid)
	{
		int m = grid.size();
		int n = grid[0].size();

		// �}�C�ͦ�
		vector<vector<int>> res = vector<vector<int>>(m, vector<int>(n, 0));
		// �������I�̤p�M
		res[0][0] = grid[0][0];
		// ����Y�b�̤p�M
		for (int j = 1; j < m; j++)
		{
			res[j][0] = res[j - 1][0] + grid[j][0];
		}
		// ����X�b�̤p�M
		for (int i = 1; i < n; i++)
		{
			res[0][i] = res[0][i - 1] + grid[0][i];
		}
		// ������L�̤p�M
		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				if (res[j - 1][i] < res[j][i - 1])
				{
					res[j][i] = grid[j][i] += res[j - 1][i];
				}
				else
				{
					res[j][i] = grid[j][i] += res[j][i - 1];
				}
			}
		}

		return res[m - 1][n - 1];
	}
};