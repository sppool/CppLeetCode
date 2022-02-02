//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Valid Parentheses.
//Memory Usage: 6.1 MB, less than 99.71 % of C++ online submissions for Valid Parentheses.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	bool isValid(string s)
	{
		vector<char> v;
		for (auto it = s.begin(); it != s.end(); it++)
		{
			if (!v.empty())
			{
				if (*it == ')')
				{
					if (*v.rbegin() == '(')
					{
						v.pop_back();
					}
					else
					{
						return false;
					}
					continue;
				}

				if (*it == ']')
				{
					if (*v.rbegin() == '[')
					{
						v.pop_back();
					}
					else
					{
						return false;
					}
					continue;
				}

				if (*it == '}')
				{
					if (*v.rbegin() == '{')
					{
						v.pop_back();
					}
					else
					{
						return false;
					}
					continue;
				}
			}
			v.push_back(*it);
		}

		if (v.empty())
		{
			return true;
		}

		else
		{
			return false;
		}
	}
};