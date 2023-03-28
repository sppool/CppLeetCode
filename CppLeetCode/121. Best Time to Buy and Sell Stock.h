//Runtime: 3 ms, faster than 95.23 % of C++ online submissions for Best Time to Buyand Sell Stock II.
//Memory Usage: 12.9 MB, less than 99.27 % of C++ online submissions for Best Time to Buyand Sell Stock II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int maxProfit(vector<int>& prices)
	{
		int res = 0;
		int min = prices[0];

		for (int i = 1; i < prices.size(); ++i)
		{
			min = (prices[i] < min) ? prices[i] : min;
			res = (prices[i] - min > res) ? prices[i] - min : res;
		}

		return res;
	}
};