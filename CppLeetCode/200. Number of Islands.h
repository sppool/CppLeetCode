//Runtime: 38 ms, faster than 68.38 % of C++ online submissions for Number of Islands.
//Memory Usage : 12.2 MB, less than 84.08 % of C++ online submissions for Number of Islands.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int m;
	int n;
	int numIslands(vector<vector<char>>& grid)
	{
		m = grid.size();
		n = grid[0].size();

		int res = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (grid[j][i] == '1')
				{
					findone(grid, i, j);
					res++;
				}
			}
		}

		return res;
	}

	void findone(vector<vector<char>>& grid, int x, int y)
	{
		grid[y][x] = '0';

		int xr = x + 1;
		int xl = x - 1;
		int yu = y + 1;
		int yd = y - 1;

		if (xr < n && grid[y][xr] == '1')
		{
			findone(grid, xr, y);
		}
		if (xl >= 0  && grid[y][xl] == '1')
		{
			findone(grid, xl, y);
		}
		if (yu < m && grid[yu][x] == '1')
		{
			findone(grid, x, yu);
		}
		if (yd >= 0 && grid[yd][x] == '1')
		{
			findone(grid, x, yd);
		}
	}
};