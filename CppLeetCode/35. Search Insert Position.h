//Runtime: 4 ms, faster than 81.93 % of C++ online submissions for Search Insert Position.
//Memory Usage: 9.6 MB, less than 72.72 % of C++ online submissions for Search Insert Position.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int searchInsert(vector<int>& nums, int target)
	{
		if (nums.size() == 0) // 空列表
		{
			return 0;
		}

		if (*nums.begin() > target) // 插入最前
		{
			return 0;
		}

		if (target > *nums.rbegin()) // 插入最後
		{
			return nums.size();
		}

		int r = 0;
		int l = nums.size() - 1;
		int mid = (r + l) / 2;

		do
		{
			if (nums[r] == target)
			{
				return r;
			}
			if (nums[l] == target)
			{
				return l;
			}
			if (nums[mid] == target)
			{
				return mid;
			}
			cout << r << " - " << mid << " - " << l << endl;
			if (nums[r] < target && target < nums[mid]) // 左半邊
			{
				l = mid;
			}
			else // 右半邊
			{
				r = mid;
			}

			mid = (r + l) / 2;

		} while (r + 1 != l);

		return l;
	}
};