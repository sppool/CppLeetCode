//Runtime: 113 ms, faster than 85.59 % of C++ online submissions for Number of Laser Beams in a Bank.
//Memory Usage: 34.7 MB, less than 8.72 % of C++ online submissions for Number of Laser Beams in a Bank.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int numberOfBeams(vector<string>& bank)
	{
		vector<int> rowcount;
		int val;
		for (string str : bank)
		{
			val = one_count(str);
			if (val > 0)
			{
				rowcount.push_back(val);
			}
		}

		int n = rowcount.size();

		if (n <= 1)
		{
			return 0;
		}

		int res = 0;
		for (int i = 1; i < n; i++)
		{
			res += rowcount[i] * rowcount[i-1];
		}

		return res;
	}

	int one_count(string code)
	{
		int count = 0;
		for (char c : code)
		{
			count += (c == '1') ? 1 : 0;
		}

		return count;
	}
};