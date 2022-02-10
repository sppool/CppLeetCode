//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Maximum Nesting Depth of the Parentheses.
//Memory Usage: 6.3 MB, less than 20.78 % of C++ online submissions for Maximum Nesting Depth of the Parentheses.

#pragma once

#include <iostream>
using namespace std;


class Solution {
public:
    int maxDepth(string s) {

        int res = 0;
        int n = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                n++;
                res = max(res, n);
            }

            if (c == ')')
            {
                n--;
            }

        }

        return res;
    }
};