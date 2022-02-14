//Runtime: 318 ms, faster than 30.06 % of C++ online submissions for Contains Duplicate II.
//Memory Usage: 80.4 MB, less than 22.05 % of C++ online submissions for Contains Duplicate II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k)
	{
		// <number, ind>
		map<int, int> dic;
		for (int i = 0; i < nums.size(); i++)
		{
			if (dic.count(nums[i]) == 1)
			{
				if (i - dic[nums[i]] <= k)
				{
					return true;
				}
			}

			dic[nums[i]] = i;
		}

		return false;
	}
};