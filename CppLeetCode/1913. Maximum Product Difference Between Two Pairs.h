//Runtime: 28 ms, faster than 83.86 % of C++ online submissions for Maximum Product Difference Between Two Pairs.
//Memory Usage: 20.4 MB, less than 64.40 % of C++ online submissions for Maximum Product Difference Between Two Pairs.

#pragma once

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Solution 
{
public:
    int maxProductDifference(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        int mx = *nums.rbegin() * (*(nums.rbegin() + 1));
        int mn = *nums.begin() * (*(nums.begin() + 1));

        return mx - mn;
    }
};