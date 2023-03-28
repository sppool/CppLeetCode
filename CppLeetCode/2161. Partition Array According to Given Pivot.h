//Runtime: 239 ms, faster than 81.89 % of C++ online submissions for Partition Array According to Given Pivot.
//Memory Usage: 123.1 MB, less than 98.94 % of C++ online submissions for Partition Array According to Given Pivot.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> pivotArray(vector<int>& nums, int pivot)
	{
		int n = nums.size();
		vector<int> res = vector<int>(n, pivot);
		int r = n - 1;
		int l = 0;

		for (int i = 0; i < n; ++i)
		{
			if (nums[i] > pivot)
			{
				res[r] = nums[i];
				r--;
			}

			else if (nums[i] < pivot)
			{
				res[l] = nums[i];
				l++;
			}

			else // nums[i] == pivot
			{
				continue;
			}

		}
		reverse(res.begin() + r + 1, res.end());

		return res;
	}
};