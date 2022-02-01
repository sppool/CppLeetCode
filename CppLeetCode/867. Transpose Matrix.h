//Runtime: 3 ms, faster than 100.00 % of C++ online submissions for Transpose Matrix.
//Memory Usage: 10.9 MB, less than 7.85 % of C++ online submissions for Transpose Matrix.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<vector<int>> transpose(vector<vector<int>>& matrix)
	{
		int m = matrix.size();
		int n = matrix[0].size();
		cout << m << " - " << n << endl;
		vector<vector<int>> res;
		vector<int>* tmp = new vector<int>[n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				tmp[i].push_back(matrix[j][i]);
			}
			res.push_back(tmp[i]);
		}
		delete[] tmp;

		return res;
	}
};
