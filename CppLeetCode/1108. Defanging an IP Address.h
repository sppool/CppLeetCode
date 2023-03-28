//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Defanging an IP Address.
//Memory Usage: 5.9 MB, less than 89.50 % of C++ online submissions for Defanging an IP Address.

#pragma once

#include <iostream>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        for (int i = 0; i < address.length(); ++i)
        {
            if (address[i] == '.')
            {
                address.replace(i, 1, "[.]");
                i += 2;
            }
        }

        return address;
    }
};