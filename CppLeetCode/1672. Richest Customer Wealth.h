//Runtime: 3 ms, faster than 95.64 % of C++ online submissions for Richest Customer Wealth.
//Memory Usage: 8 MB, less than 10.87 % of C++ online submissions for Richest Customer Wealth.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int maxval = 0;

        for (auto v : accounts)
        {
            int sum = 0;
            for (auto money : v)
            {
                sum += money;
            }

            maxval = max(maxval, sum);
        }

        return maxval;
    }
};