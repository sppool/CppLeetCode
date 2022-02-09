//Runtime: 4 ms, faster than 59.53 % of C++ online submissions for Running Sum of 1d Array.
//Memory Usage: 8.6 MB, less than 37.06 % of C++ online submissions for Running Sum of 1d Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> runningSum(vector<int>& nums)
	{
		int n = nums.size();

		for (int i = 1; i < n; i++)
		{
			nums[i] += nums[i - 1];
		}

		return nums;
	}
};