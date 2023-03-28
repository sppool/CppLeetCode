//Runtime: 28 ms, faster than 85.99 % of C++ online submissions for Squares of a Sorted Array.
//Memory Usage: 26.9 MB, less than 25.96 % of C++ online submissions for Squares of a Sorted Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> sortedSquares(vector<int>& nums)
	{
		vector<int> res;

		// 0 -> N or -N ->0  
		if (*nums.begin() >= 0)
		{
			for (auto it = nums.begin(); it != nums.end(); it++)
			{
				res.push_back((*it) * (*it));
			}

			return res;
		}

		if (*nums.rbegin() <= 0)
		{
			for (auto it = nums.rbegin(); it != nums.rend(); it++)
			{
				res.push_back(*(it) * (*it));
			}

			return res;
		}

		int ri;
		int li;
		// 取得正負號分界 <-0 & 0 or 0->
		for (int i =0; i<nums.size();++i)
		{
			if (nums[i] >= 0)
			{
				ri = i;
				li = ri - 1;

				break;
			}
		}

		while (!((ri == nums.size()) && (li == -1)))
		{
			if (li == -1)
			{
				res.push_back(nums[ri] * nums[ri]);
				ri++;
				continue;
			}
			if (ri == nums.size())
			{
				res.push_back(nums[li] * nums[li]);
				li--;
				continue;
			}

			if (abs(nums[li]) > nums[ri])
			{
				res.push_back(nums[ri] * nums[ri]);
				ri++;
			}
			else
			{
				res.push_back(nums[li] * nums[li]);
				li--;
			}
		}

		return res;
	}
};