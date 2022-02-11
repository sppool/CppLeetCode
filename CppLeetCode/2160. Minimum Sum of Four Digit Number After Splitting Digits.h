//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Minimum Sum of Four Digit Number After Splitting Digits.
//Memory Usage: 6.1 MB, less than 28.68 % of C++ online submissions for Minimum Sum of Four Digit Number After Splitting Digits.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution
{
public:
	int minimumSum(int num)
	{
		vector<int> lst;
		for (int i = 0; i < 4; i++)
		{
			lst.push_back(num % 10);
			num /= 10;
		}
		sort(lst.begin(), lst.end());
	
		int val = 10 * (lst[0] + lst[1]) + (lst[2] + lst[3]);

		return val;
	}
};