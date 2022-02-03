//Runtime: 8 ms, faster than 49.96 % of C++ online submissions for N - Queens II.
//Memory Usage: 10.9 MB, less than 15.84 % of C++ online submissions for N - Queens II.

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
		vector<string> arr = Initarr(n);
		nextQ(arr, 0, n);

		return res_;
    }

	void nextQ(vector<string>& arr, int row, int n)
	{
		if (row == n) // �ƺ��F  �C�J����
		{
			res_++;

			return;
		}

		for (int i = 0; i < n; i++) // �ƦC y = row, x = 0 ~ n-1
		{
			if (arr[row][i] == '.')
			{
				vector<string> new_arr = vector<string>(arr);
				putQ(new_arr, i, row, n);
				nextQ(new_arr, row + 1, n);
			}
		}
	}

	vector<string> Initarr(int n)
	{
		vector<string> arr = vector<string>(n, string(n, '.'));

		return arr;
	}

	void putQ(vector<string>& arr, int x, int y, int n) // �n�b�ĴX���Q
	{
		arr[y][x] = 'Q';
		int x1 = x;
		int x2 = x;
		for (int j = y + 1; j < n; j++)
		{
			arr[j][x] = 'x'; // �����m���O��
			x1++;
			x2--;
			if (x1 < n)
			{
				arr[j][x1] = 'x'; // �����m���O��
			}
			if (x2 >= 0)
			{
				arr[j][x2] = 'x'; // �����m���O��
			}
		}
	}
};