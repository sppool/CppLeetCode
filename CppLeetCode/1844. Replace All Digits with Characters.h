//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Replace All Digits with Characters.
//Memory Usage: 6.1 MB, less than 81.44 % of C++ online submissions for Replace All Digits with Characters.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Solution 
{
public:
    string replaceDigits(string s) 
    {
        int n = s.length() / 2;
        for (int i = 0; i < n; ++i)
        {
            s[2 * i + 1] = s[2 * i] + stoi(s.substr(2 * i + 1, 1));
        }

        return s;
    }
};