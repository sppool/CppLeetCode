//Runtime: 8 ms, faster than 95.01 % of C++ online submissions for Count Number of Pairs With Absolute Difference K.
//Memory Usage: 12.4 MB, less than 40.86 % of C++ online submissions for Count Number of Pairs With Absolute Difference K.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                res += (abs(nums[i] - nums[j]) == k) ? 1 : 0;
            }
        }

        return res;
    }
};