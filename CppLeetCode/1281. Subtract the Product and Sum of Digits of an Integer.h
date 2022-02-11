//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Subtract the Productand Sum of Digits of an Integer.
//Memory Usage: 6 MB, less than 24.44 % of C++ online submissions for Subtract the Productand Sum of Digits of an Integer.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution 
{
public:
    int subtractProductAndSum(int n) 
    {
        int addone = 0;
        int multone = 1;
        int dig;
        do 
        {
            dig = n % 10;
            addone += dig;
            multone *= dig;
            n /= 10;
        } while (n !=0);


        return (multone - addone);
    }
};