//Runtime: 40 ms, faster than 48.92 % of C++ online submissions for Combinations.
//Memory Usage: 51.9 MB, less than 22.66 % of C++ online submissions for Combinations.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<vector<int>> res;
	vector<vector<int>> combine(int n, int k)
	{
		vector<int> tmp; // empty
		Do(tmp, 1, n, k);

		return res;
	}

	void Do(vector<int> v, int num, int out, int  count)
	{
		if (v.size() == count) // 條件完成
		{
			res.push_back(v);

			return;
		}

		if ((out - num + 1) < (count - v.size()))
		{
			return;
		}

		// 不加入元素 遞迴
		Do(v, num + 1, out, count);

		// 加入元素 遞迴
		v.push_back(num);
		Do(v, num + 1, out, count);
	}
};