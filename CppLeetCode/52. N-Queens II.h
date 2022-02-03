//Runtime: 91 ms, faster than 9.06 % of C++ online submissions for N - Queens II.
//Memory Usage: 16.1 MB, less than 13.13 % of C++ online submissions for N - Queens II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
/*
   0     X (i)
	 |------>
	 |
  Y  |
 (j) |
	 v
*/

class Solution
{
public:
	int res_;
    int totalNQueens(int n)
    {
		vector<vector<bool>> arr = Initarr(n);
		nextQ(arr, 0, n);

		return res_;
    }

	void nextQ(const vector<vector<bool>>& arr, int row, int n)
	{
		if (row == n)
		{
			res_++;
		}
		for (int i = 0; i < n; i++)
		{
			if (checkQ(arr, i, row, n))
			{
				vector<vector<bool>> new_arr = vector<vector<bool>>(arr);
				putQ(new_arr, i, row);
				nextQ(new_arr, row + 1, n);
			}
		}
	}

	vector<vector<bool>> Initarr(int n)
	{
		vector<vector<bool>> arr = vector<vector<bool>>(n, vector<bool>(n, false));

		return arr;
	}

	void putQ(vector<vector<bool>>& arr, int x, int y) // 要在第幾行排Q
	{
		arr[y][x] = true;
	}

	bool checkQ(const vector<vector<bool>>& checkarr, int x, int y, int n)
	{
		for (int j = 0; j < y; j++)
		{
			for (int i = 0; i < n; i++) // 找 true
			{
				if (checkarr[j][i])
				{
					if (x == i || y == j || abs(x - i) == abs(y - j)) // 水平 垂直 斜線
					{
						return false;
					}

					break;
				}
			}
		}

		return true;
	}
};