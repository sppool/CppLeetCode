//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Sum of Unique Elements.
//Memory Usage: 8.1 MB, less than 23.93 % of C++ online submissions for Sum of Unique Elements.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution 
{
public:
    int sumOfUnique(vector<int>& nums) 
    {
        map<int, int> dic;
        for (auto it = nums.begin(); it!=nums.end(); it++)
        {
            dic.insert(pair<int, int>(*it, 0));
            dic[*it]++;
        }

        int res = 0;
        for (auto it = dic.begin(); it != dic.end(); it++)
        {
            if (it->second == 1)
            {
                res += it->first;
            }
        }

        return res;
    }
};