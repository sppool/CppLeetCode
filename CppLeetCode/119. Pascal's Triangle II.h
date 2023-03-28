//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Pascal's Triangle II.
//Memory Usage: 6.6 MB, less than 32.66 % of C++ online submissions for Pascal's Triangle II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> getRow(int rowIndex)
	{
		if (rowIndex == 0)
		{
			return vector<int>(1, 1); // 1個1
		}

		vector<int>* tmp = new vector<int>(2, 1); // 2個1
		if (rowIndex == 1)
		{
			return *tmp;
		}

		int t = 1;
		do
		{
			vector<int>* res = new vector<int>;
			res->push_back(1); // 開頭
			for (int i = 1; i < tmp->size(); ++i)
			{
				res->push_back((*tmp)[i - 1] + (*tmp)[i]);
			}
			res->push_back(1); // 結尾

			delete tmp;
			tmp = res;

		} while (++t < rowIndex);

		return *tmp;
	}
};