//Runtime: 8 ms, faster than 85.26 % of C++ online submissions for Trapping Rain Water.
//Memory Usage: 15.7 MB, less than 84.68 % of C++ online submissions for Trapping Rain Water.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int trap(vector<int>& height)
	{
		int n = height.size();
		int val = 0;
		int pool = 0;
		int h = 0;
		for (auto it = height.begin(); it != height.end(); it++)
		{
			if (*it >= h) // 注意這裡 才不會重複兩邊一樣高的情況
			{
				h = *it;
				val += pool;
				pool = 0;
			}
			else
			{
				pool += (h - *it);
			}
		}

		pool = 0;
		h = 0;
		for (auto it = height.rbegin(); it != height.rend(); it++)
		{
			if (*it > h) // 注意這裡 才不會重複兩邊一樣高的情況
			{
				h = *it;
				val += pool;
				pool = 0;
			}
			else
			{
				pool += (h - *it);
			}
		}

		return val;
	}
};