//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Split a String in Balanced Strings.
//Memory Usage: 6.2 MB, less than 79.84 % of C++ online submissions for Split a String in Balanced Strings.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    int balancedStringSplit(string s) 
    {
        int res = 0;
        int n = 1;
        char first = s[0];

        for (char c : s.substr(1))
        {
            n += (c == first) ? 1 : -1;
            res += (n == 0) ? 1 : 0;
        }

        return res;
    }
};