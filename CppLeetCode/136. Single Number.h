//Runtime: 12 ms, faster than 98.14 % of C++ online submissions for Single Number.
//Memory Usage: 16.9 MB, less than 85.50 % of C++ online submissions for Single Number.

#pragma once
/*
   0011
   0101
   ---- XOR
   0110
*/


#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = 0;
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            res ^= *it; // XOR  (5 ^ 5 = 0)
        }

        return res;
    }
};