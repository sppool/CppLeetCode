//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Kids With the Greatest Number of Candies.
//Memory Usage: 9 MB, less than 58.66 % of C++ online submissions for Kids With the Greatest Number of Candies.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
	{
		vector<bool> res = vector<bool>(candies.size(), false);

		int mx = 0;

		for (int n : candies)
		{
			mx = max(mx, n);
		}

		for (int i = 0; i < candies.size(); ++i)
		{
			res[i] = (candies[i] + extraCandies >= mx);
		}

		return res;
	}
};