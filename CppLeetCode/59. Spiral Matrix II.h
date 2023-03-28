//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Spiral Matrix II.
//Memory Usage: 6.7 MB, less than 16.47 % of C++ online submissions for Spiral Matrix II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<vector<int>> generateMatrix(int n)
	{
		vector<vector<int>> res;
		for (int i = 0; i < n; ++i)
		{
			vector<int>* tmp = new vector<int>;
			for (int j = 0; j < n; ++j)
			{
				tmp->push_back(0);
			}
			res.push_back(*tmp);
		}
		int l = 0;
		int r = n - 1;
		int t = 0;
		int b = n - 1;
		int num = 1;
		int tar = n * n;
		while (num <= tar)
		{
			for (int i = l; i <= r; ++i)
			{
				res[t][i] = num++;
			}
			++t;
			for (int i = t; i <= b; ++i)
			{
				res[i][r] = num++;
			}
			--r;
			for (int i = r; i >= l; --i)
			{
				res[b][i] = num++;
			}
			--b;
			for (int i = b; i >= t; --i)
			{
				res[i][l] = num++;
			}
			++l;
		}

		return res;
	}
};

