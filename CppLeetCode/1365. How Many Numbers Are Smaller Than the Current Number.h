//Runtime: 7 ms, faster than 86.05 % of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
//Memory Usage: 10.4 MB, less than 22.96 % of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.

#pragma once

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>

class Solution
{
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums)
	{
		vector<int> copy = nums;
		map <int, int> dict;
		sort(copy.begin(), copy.end());

		for (int i = 0; i < copy.size(); i++)
		{
			if (dict.count(copy[i]) != 1)
			{
;				dict[copy[i]] = i;
			}
		}
		vector<int> res = vector<int>(nums.size());

		for (int i = 0; i < nums.size(); i++)
		{
			res[i] = dict[nums[i]];
		}

		return res;
	}
};