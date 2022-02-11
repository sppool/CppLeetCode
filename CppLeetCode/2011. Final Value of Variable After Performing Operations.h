//Runtime: 7 ms, faster than 84.76 % of C++ online submissions for Final Value of Variable After Performing Operations.
//Memory Usage: 14.1 MB, less than 58.03 % of C++ online submissions for Final Value of Variable After Performing Operations.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int res = 0;
        for (string s : operations)
        {
            res += (s[1] == '+') ? 1 : -1;
        }

        return res;
    }
};