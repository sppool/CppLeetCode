//Runtime: 319 ms, faster than 51.53 % of C++ online submissions for Minimize Maximum Pair Sum in Array.
//Memory Usage: 96.2 MB, less than 63.41 % of C++ online submissions for Minimize Maximum Pair Sum in Array.

#pragma once

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Solution
{
public:
	int minPairSum(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());

		int res = INT32_MIN;
		int l = 0;
		int r = nums.size() - 1;

		while (r > l)
		{
			res = max(res, nums[l] + nums[r]);
			r--;
			l++;
		}

		return res;
	}
};