//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Pascal's Triangle.
//Memory Usage: 6.5 MB, less than 33.41 % of C++ online submissions for Pascal's Triangle.
#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<vector<int>> generate(int numRows)
	{
		vector<vector<int>> res;
		res.push_back(vector<int>(1, 1)); // 1個1
		if (numRows == 1)
		{
			return res;
		}
		res.push_back(vector<int>(2, 1)); // 2個1
		if (numRows == 2)
		{
			return res;
		}
		int j = 2;
		do
		{
			vector<int>* tmp = new vector<int>;
			tmp->push_back(1); // 開頭
			for (int i = 1; i < res.rbegin()->size(); i++)
			{
				tmp->push_back((*res.rbegin())[i - 1] + (*res.rbegin())[i]);
			}

			tmp->push_back(1); // 結尾
			res.push_back(*tmp);

		} while (++j < numRows);

		return res;
	}
};