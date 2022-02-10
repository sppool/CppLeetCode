//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Count of Matches in Tournament.
//Memory Usage: 5.9 MB, less than 24.66 % of C++ online submissions for Count of Matches in Tournament.

#pragma once

#include <iostream>
using namespace std;

class Solution
{
public:
	int numberOfMatches(int n)
	{
		int res = 0;
		levelup(n, res);

		return res;
	}

	void levelup(int n, int& res)
	{
		int next = (n / 2);
		res += next;
		next += (n % 2 == 1) ? 1 : 0;
		if (next==1)
		{
			return;
		}

		levelup(next, res);
	}
};