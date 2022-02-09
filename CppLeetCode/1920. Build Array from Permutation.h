//Runtime: 4 ms, faster than 99.78 % of C++ online submissions for Build Array from Permutation.
//Memory Usage: 16.2 MB, less than 78.36 % of C++ online submissions for Build Array from Permutation.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    vector<int> buildArray(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> res = vector<int>(n, 0);

        for (int i = 0; i < n; i++)
        {
            res[i] = nums[nums[i]];
        }

        return res;
    }
};