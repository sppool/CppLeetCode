//Runtime: 7 ms, faster than 51.74 % of C++ online submissions for Check If Two String Arrays are Equivalent.
//Memory Usage: 11.6 MB, less than 27.60 % of C++ online submissions for Check If Two String Arrays are Equivalent.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string check1 = "";
        string check2 = "";
        for (string str : word1)
        {
            check1 += str;
        }
        for (string str : word2)
        {
            check2 += str;
        }

        return check1 == check2;
    }
};