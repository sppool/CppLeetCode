//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for N - th Tribonacci Number.
//Memory Usage: 6 MB, less than 50.01 % of C++ online submissions for N - th Tribonacci Number.

#pragma once

#include <iostream>
using namespace std;

class Solution 
{
public:
    int tribonacci(int n) 
    {
		if (n <= 1)
		{
			return n;
		}

		if (n == 2)
		{
			return 1;
		}

		int tx3 = 0; // f(0), f(x-3)
		int tx2 = 1; // f(1), f(x-2)
		int tx1 = 1; // f(2), f(x-1)
		int tx = tx1 + tx2 + tx3; // f(x)

		for (int i = 3; i < n; i++)
		{
			tx3 = tx2;
			tx2 = tx1;
			tx1 = tx;
			tx = tx1 + tx2 + tx3;
		}

		return tx;
    }
};