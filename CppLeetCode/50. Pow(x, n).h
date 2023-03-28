//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Pow(x, n).
//Memory Usage: 6.3 MB, less than 11.61 % of C++ online submissions for Pow(x, n).

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	double myPow(double x, int n)
	{
		vector<int> v = getbit(n);
		vector<double> PowV;
		double tmp = x;
		for (int i = 0; i < v.size(); ++i)
		{
			PowV.push_back(tmp);
			tmp *= tmp;
		}
		tmp = 1;

		for (int i = 0; i < v.size(); ++i)
		{
			if (v[i])
			{
				tmp *= PowV[i];
			}
		}

		if (n < 0)
		{
			return 1 / tmp;
		}

		return tmp;
	}

	vector<int> getbit(int n)
	{
		vector<int> v;
		long val = abs((long)n);
		for (int i = 0; i < 32; ++i)
		{	
			if (val >= pow(2, i))
			v.push_back(val >> i & 1);
		}

		return v;
	}
};
