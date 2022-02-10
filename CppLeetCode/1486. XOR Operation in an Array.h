//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for XOR Operation in an Array.
//Memory Usage: 5.9 MB, less than 40.81 % of C++ online submissions for XOR Operation in an Array.

#pragma once

#include <iostream>
using namespace std;

class Solution
{
public:
	int xorOperation(int n, int start)
	{
		int  res = start;
		for (int i = 1; i < n ; i++)
		{
			res ^= (start + (2 * i));

			cout << res << endl;
		}

		return res;
	}
};