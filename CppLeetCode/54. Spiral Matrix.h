//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Spiral Matrix.
//Memory Usage: 6.8 MB, less than 92.55 % of C++ online submissions for Spiral Matrix.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix)
	{
		vector<int> res;
		int i = 0;
		int j = 0;
		int h = matrix.size();
		int w = matrix[0].size();

		int l = 0; // col������
		int u = 1; // row�W����
		int r = w - 1; // col�k����
		int d = h - 1; // row�U����

		res.push_back(matrix[i][j]);
		while (true)
		{
			while (j < r)
			{
				++j;
				res.push_back(matrix[i][j]);
			}
			--r;
			while (i < d)
			{
				++i;
				res.push_back(matrix[i][j]);
			}
			--d;
			while (j > l)
			{
				j--;
				res.push_back(matrix[i][j]);
			}
			++l;
			while (i > u)
			{
				i--;
				res.push_back(matrix[i][j]);
			}
			++u;

			if ((r < l) && (d < u))
			{
				break;
			}
		}
		while (res.size() > (w * h)) // �|�h�@�� �R��
		{
			res.pop_back();
		}

		return res;
	}
};