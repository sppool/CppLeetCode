//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Number of Steps to Reduce a Number to Zero.
//Memory Usage: 6 MB, less than 24.99 % of C++ online submissions for Number of Steps to Reduce a Number to Zero.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int numberOfSteps(int num)
	{
		if (!num)
		{
			return 0;
		}

		int res = 0;
		int i = 0;
		while (num > 0)
		{
			res += ((num  & 1) == 1) ? 2 : 1;
			num >>= 1;
			i++;
		}

		return res - 1; // 最後一碼 不需要移位!!
	}
};