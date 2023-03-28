//Runtime: 0 ms, fxaster than 100.00 % of C++ online submissions for Climbing Stairs.
//Memory Usage: 5.9 MB, less than 53.98 % of C++ online submissions for Climbing Stairs.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    int climbStairs(int n) // f(n) = f(n - 1) + f(n - 2)
    {
        if (n == 1)
        {
            return 1;
        }

        int fx2 = 1; // 0¶¥
        int fx1 = 1; // 1¶¥
        int fx = fx1 + fx2;

        for (int i = 2; i < n; ++i)
        {
            fx2 = fx1;
            fx1 = fx;
            fx = fx1 + fx2;
        }

        return fx;
    }
};