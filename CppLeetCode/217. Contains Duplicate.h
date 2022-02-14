//Runtime: 111 ms, faster than 62.41 % of C++ online submissions for Contains Duplicate.
//Memory Usage: 52.1 MB, less than 33.49 % of C++ online submissions for Contains Duplicate.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
    bool containsDuplicate(vector<int>& nums)
	{
		// <number, ind>
		map<int, int> dic;
		for (int i = 0; i < nums.size(); i++)
		{
			dic[nums[i]]++;

			if (dic[nums[i]] == 2)
			{
					return true;
			}
		}

		return false;
    }
};