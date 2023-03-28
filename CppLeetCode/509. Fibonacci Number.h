//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Fibonacci Number.
//Memory Usage: 5.9 MB, less than 79.93 % of C++ online submissions for Fibonacci Number.

#pragma once

#include <iostream>
using namespace std;

class Solution
{
public:
	int fib(int n)
	{
		if (n <= 1)
		{
			return n;
		}

		int fx2 = 0; // f(0), f(x-2)
		int fx1 = 1; // f(1), f(x-1)
		int fx = fx1 + fx2; // f(x)

		for (int i = 2; i < n; ++i)
		{
			fx2 = fx1;
			fx1 = fx;
			fx = fx1 + fx2;
		}

		return fx;
	}
};