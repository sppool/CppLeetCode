Runtime: 7 ms, faster than 66.62 % of C++ online submissions for Best Time to Buyand Sell Stock II.
Memory Usage : 13 MB, less than 86.43 % of C++ online submissions for Best Time to Buyand Sell Stock II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>#pragma once

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
		int sum = 0;
		int val;

		for (int i = 0; i < prices.size() - 1; i++)
		{
			val = prices[i + 1] - prices[i];
			sum += (val > 0) ? val : 0;
		}

		return sum;
    }
};