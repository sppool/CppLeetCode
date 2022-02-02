//Runtime: 2 ms, fasteRuntime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths.
//Memory Usage: 6.2 MB, less than 48.51% of C++ online submissions for Unique Paths.

#pragma once

#include <iostream>
using namespace std;

class Solution
{
public:
	int uniquePaths(int m, int n)
	{
		// 陣列生成
		int** res = new int* [m];
		for (int i = 0; i < m; ++i)
		{
			res[i] = new int[n];
		}
		// x=0, y=0 都為1
		for (int i = 0; i < m; i++)
		{
			res[i][0] = 1;
		}
		for (int j = 0; j < n; j++)
		{
			res[0][j] = 1;
		}

		// 其餘為M[x][y] =  M[x-1][y] + M[x][y-1]
		for (int i = 1; i < m; i++)
		{
			for (int j = 1; j < n; j++)
			{
				res[i][j] += (res[i][j - 1] + res[i - 1][j]);
			}
		}

		return res[m - 1][n - 1];
	}
};