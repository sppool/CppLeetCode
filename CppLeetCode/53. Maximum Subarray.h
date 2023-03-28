//Runtime: 96 ms, faster than 94.20 % of C++ online submissions for Maximum Subarray.
//Memory Usage: 67.8 MB, less than 11.58 % of C++ online submissions for Maximum Subarray.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int maxSubArray(vector<int>& nums)
	{
		int n = nums.size();

		int sum = nums[0];
		int max = nums[0];
		for (int i = 1; i < n; ++i)
		{
			if (sum < 0)
			{
				sum = nums[i];
			}
			else
			{
				sum += nums[i];
			}

			max = (sum > max) ? sum : max;
		}

		return max;
	}
};

