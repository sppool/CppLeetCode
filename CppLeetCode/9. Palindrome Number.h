//Runtime: 12 ms, faster than 66.84 % of C++ online submissions for Palindrome Number.
//Memory Usage: 5.9 MB, less than 73.84 % of C++ online submissions for Palindrome Number.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
	bool isPalindrome(int x)
	{
		if (x < 0)
		{
			return false;
		}
		if (x == 0)
		{
			return true;
		}
		if (x % 10 == 0)
		{
			return false;
		}
		int tmp = x;
		long rev = 0;

		while (tmp != 0)
		{
			rev = (rev * 10) + (tmp % 10);
			tmp /= 10;
		}

		return rev == x;
	}
};