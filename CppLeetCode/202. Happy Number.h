//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Happy Number.
//Memory Usage: 6.4 MB, less than 25.72 % of C++ online submissions for Happy Number.

#pragma once

#include <iostream>
using namespace std;
#include <map>

class Solution
{
public:
	bool isHappy(int n)
	{
		map<int, int> dic;
		int tmp = n;
		do
		{
			dic[tmp];
			tmp = transpose(tmp);
			if (tmp == 1)
			{
				return true;
			}
		} while (dic.count(tmp) == 0);

		return false;
	}

	int transpose(int num)
	{
		int sum = 0;
		do
		{
			sum += pow((num % 10), 2);
			num /= 10;
		} while (num != 0);

		return sum;
	}
};