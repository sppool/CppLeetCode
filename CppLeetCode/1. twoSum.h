//Runtime: 12 ms, faster than 82.04 % of C++ online submissions for Two Sum.
//Memory Usage: 11.2 MB, less than 17.35 % of C++ online submissions for Two Sum.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res;
        map<int, int> dict;
        int find_val;
        for (int i = 0; i < nums.size(); ++i)
        {
            find_val = target - nums[i];
            if (dict.count(find_val))
            {
                res.push_back(dict[find_val]);
                res.push_back(i);

                return res;
            }

            else
            {
                dict[nums[i]] = i;
            }

        }
        return res;
    }
};