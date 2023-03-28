//Runtime: 152 ms, faster than 78.33 % of C++ online submissions for First Missing Positive.
//Memory Usage: 83.1 MB, less than 27.04 % of C++ online submissions for First Missing Positive.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int firstMissingPositive(vector<int>& nums)
	{
		int n = nums.size();

		for (int& num : nums)
		{
			if (num < 1)
			{
				num = n + 1;
			}
		}

		int val;
		for (auto i = 0; i < n; ++i)
		{
			val = abs(nums[i]);
			if (1 <= val && val <= n)
			{
				nums[val - 1] = -abs(nums[val - 1]);
			}
		}

		for (auto i = 0; i < n; ++i)
		{
			if (nums[i] > 0)
			{
				return i + 1;
			}
		}

		return n + 1;
	}
};