//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Climbing Stairs.
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
        
        int p = 0, q = 0, r = 1;
        for (int i = 1; i <= n; i++) 
        {
            p = q;
            q = r;
            r = p + q;
        }

        return r;
    }
};