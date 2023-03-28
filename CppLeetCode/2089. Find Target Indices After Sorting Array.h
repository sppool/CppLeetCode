//Runtime: 4 ms, faster than 86.95 % of C++ online submissions for Find Target Indices After Sorting Array.
//Memory Usage: 11.6 MB, less than 61.18 % of C++ online submissions for Find Target Indices After Sorting Array.

#pragma once

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Solution 
{
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == target)
            {
                res.push_back(i);
            }
        }

        return res;
    }
};