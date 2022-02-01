//Runtime: 4 ms, faster than 73.66 % of C++ online submissions for Search in Rotated Sorted Array.
//Memory Usage: 11.1 MB, less than 28.95 % of C++ online submissions for Search in Rotated Sorted Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int search(vector<int>& nums, int target)
	{
		if (nums.size() == 0) // 空列表
		{
			return -1;
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

			if (nums[r] < nums[mid]) // 左半有序 (sort)
			{
				if (nums[r] < target && target < nums[mid])
				{
					l = mid;
				}
				else
				{
					r = mid;
				}
			}

			else // 右半有序 (sort)
			{
				if (nums[mid] < target && target < nums[l])
				{
					r = mid;
				}
				else
				{
					l = mid;
				}
			}

			mid = (r + l) / 2;
		} 
		while (r != mid);

		return -1; // 沒有找到
	}
};