//Runtime: 8 ms, faster than 83.66 % of C++ online submissions for Single Number II.
//Memory Usage: 9.4 MB, less than 99.29 % of C++ online submissions for Single Number II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int singleNumber(vector<int>& nums)
	{
		int res = 0;
		for (int i = 0; i < 32; ++i)
		{
			int count = 0;
			for (int j = 0; j < nums.size(); ++j)
			{
				count += (nums[j] >> i) & 1;
			}
			if ((count % 3) == 1) // 
			{
				res += (1 << i);
				//res |= (1 << i); // ³£¥i
			}
		}

		return res;
	}
};