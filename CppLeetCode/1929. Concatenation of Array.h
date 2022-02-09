//Runtime: 4 ms, faster than 97.62 % of C++ online submissions for Concatenation of Array.
//Memory Usage: 12.7 MB, less than 62.84 % of C++ online submissions for Concatenation of Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n = nums.size();
        
        for (int i = 0; i < n; i++)
        {
            nums.push_back(nums[i]);
        }

        return nums;
    }
};