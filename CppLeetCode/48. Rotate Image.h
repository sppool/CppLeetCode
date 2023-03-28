//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Rotate Image.
//Memory Usage: 7 MB, less than 92.91 % of C++ online submissions for Rotate Image.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	void rotate(vector<vector<int>>& matrix)
	{
		int n = matrix.size();
		int tmp;
		// 水平鏡像
		for (int i = 0; i < (n / 2); ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				tmp = matrix[i][j];
				matrix[i][j] = matrix[n - 1 - i][j];
				matrix[n - 1 - i][j] = tmp;
			}
		}
		// 角旋轉鏡像
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				//cout << i << j << endl;
				tmp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = tmp;
			}
		}
	}
};