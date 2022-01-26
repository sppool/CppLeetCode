//Runtime: 722 ms, faster than 5.55 % of C++ online submissions for Remove Duplicates from Sorted Array.
//Memory Usage: 18.4 MB, less than 74.21 % of C++ online submissions for Remove Duplicates from Sorted Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int removeDuplicates(vector<int>& nums)
	{
		if (nums.empty())
		{
			return 0;
		}

		int check = nums[0];
		for (vector<int>::iterator it = nums.begin() + 1; it != nums.end(); ++it)
		{
			if (*it == check)
			{
				nums.erase(it);
				--it;
			}

			else
			{
				check = *it;
			}
		}

		return nums.size();
	}
};