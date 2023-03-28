//Runtime: 12 ms, faster than 85.25 % of C++ online submissions for Majority Element II.
//Memory Usage: 15.9 MB, less than 52.48 % of C++ online submissions for Majority Element II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution 
{
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size() / 3;
        map<int, int> dict;
        for (int n : nums)
        {
            dict[n]++;
        }

        vector<int> res;
        for (auto it : dict)
        {
            if (it.second > n)
            {
                res.push_back(it.first);
            }
        }

        return res;
    }
};