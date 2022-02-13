//Runtime: 24 ms, faster than 93.87 % of C++ online submissions for Decode XORed Array.
//Memory Usage: 26.1 MB, less than 31.40 % of C++ online submissions for Decode XORed Array.

#pragma once

/*
    a ^ b = c
    a ^ c = b
    b ^ c = a
*/

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int> res = vector<int>(1, first);
        for (int num : encoded)
        {
            res.push_back(*res.rbegin() ^ num);
        }

        return res;
    }
};