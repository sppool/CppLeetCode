//Runtime: 10 ms, faster than 31.47 % of C++ online submissions for Shuffle the Array.
//Memory Usage: 9.7 MB, less than 85.02 % of C++ online submissions for Shuffle the Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> shuffle(vector<int>& nums, int n)
	{
		vector<int> res = vector<int>(n * 2, 0);

		for (int i = 0; i < n; ++i)
		{
			res[2 * i] = nums[i];
			res[2 * i + 1] = nums[n + i];
		}

		return res;
	}
};