//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Determine Color of a Chessboard Square.
//Memory Usage: 5.9 MB, less than 25.70 % of C++ online submissions for Determine Color of a Chessboard Square.

#pragma once

//(int)'a' = 97
//(int)'1' = 49

#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        char c = coordinates[0];
        char i = coordinates[1];
        int val = (int)c + (int)i;

        return (val % 2);
    }
};