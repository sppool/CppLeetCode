//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Plus One.
//Memory Usage: 8.9 MB, less than 11.73 % of C++ online submissions for Plus One.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> plusOne(vector<int>& digits)
	{
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;

				if (i == 0)
				{
					digits.insert(digits.begin(), 1);
				}
			}

			else
			{
				(digits[i]) += 1;
				break;
			}

		}

		return digits;
	}
};