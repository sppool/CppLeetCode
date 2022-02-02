//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Unique Paths II.
//Memory Usage: 7.8 MB, less than 56.76 % of C++ online submissions for Unique Paths II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>#pragma once

class Solution
{
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
	{
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();

		if (obstacleGrid[0][0] == 1)
		{
			return 0;
		}

		// 陣列生成 (實際陣列為1~m, 1~n)
		int** res = new int* [m];
		for (int i = 0; i < m; ++i)
		{
			res[i] = new int[n];
		}
		// 起點初始化
		res[0][0] = 1;
		int t;
		int l;
		// 其餘為M[x][y] =  M[x-1][y] + M[x][y-1]
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 && j == 0) // pass第一個
				{
					continue;
				}
				t = (i > 0) ? res[i - 1][j] : 0;
				t = (obstacleGrid[i][j] == 1) ? 0 : t;
				l = (j > 0) ? res[i][j - 1] : 0;
				l = (obstacleGrid[i][j] == 1) ? 0 : l;

				res[i][j] = t + l;
			}
		}

		return res[m - 1][n - 1];
	}
};