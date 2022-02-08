//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Excel Sheet Column Number.
//Memory Usage: 6.2 MB, less than 28.38 % of C++ online submissions for Excel Sheet Column Number.

// 'A' -> 65 (int)

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int titleToNumber(string columnTitle)
	{
		int l = columnTitle.length();
		int sum = 0;
		for (int i = 1; i <= l; i++)
		{
			sum += (pow(26, i - 1) * (char2int(columnTitle[l - i])));
		}

		return sum;
	}

	int char2int(char c)
	{
		return ((int)c - 64);
	}
};