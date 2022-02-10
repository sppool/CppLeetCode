//Runtime: 4 ms, faster than 93.69 % of C++ online submissions for Maximum Product Subarray.
//Memory Usage: 13.9 MB, less than 27.09 % of C++ online submissions for Maximum Product Subarray.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int maxProduct(vector<int>& nums)
	{
		int maxval = nums[0];
		int minval = nums[0];
		int tmpmx;
		int tmpmn;
		int res = nums[0];


		for (int i = 1; i < nums.size(); i++)
		{
			tmpmx = maxval;
			tmpmn = minval;
			maxval = max(tmpmx * nums[i], max(nums[i], tmpmn * nums[i])); // 出現0 會被更新為 0
			minval = min(tmpmn * nums[i], min(nums[i], tmpmx * nums[i])); // 出現0 會被更新為 0

			res = max(maxval, res);
		}

		return res;
	}
};