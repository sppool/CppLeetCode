//Runtime: 2 ms, faster than 28.65 % of C++ online submissRuntime : 0 ms, faster than 100.00 % of C++ online submissions for Hamming Distance.
//Memory Usage: 6 MB, less than 26.10 % of C++ online submissions for Hamming Distance.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    int hammingDistance(int x, int y) 
    {
        int res = 0;

        for (int i = 0; i < 32; ++i)
        {
            int x_ = x >> i;
            int y_ = y >> i;
            res += (x_ & 1) ^ (y_ & 1);
        }

        return res;
    }
};