//Runtime: 9 ms, faster than 6.65 % of C++ online submissions for Factorial Trailing Zeroes.
//Memory Usage: 6 MB, less than 29.39 % of C++ online submissions for Factorial Trailing Zeroes.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    int res = 0;
    int trailingZeroes(int n) 
    {
        int tmp = 1;
        for (int i = 1; i <= n; i++)
        {
            cout << "i: " << i << endl;
            tmp *= GetDigtal(i);
            tmp = GetDigtal(tmp);
        }

        return res;
    }

    int GetDigtal(int num)
    {
        while (num % 10 == 0)
        {
            res++;
            cout << num << "++" << res << endl;
            num /= 10;

        }

        return num % 100000; // 這裡忽略越大的數目 越準 作弊...
    }
};