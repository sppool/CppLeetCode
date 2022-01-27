//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Reverse Integer.
//Memory Usage: 6 MB, less than 30.63 % of C++ online submissions for Reverse Integer.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Solution
{
public:
	int reverse(int x)
	{
		if (x == 0)
		{
			return 0;
		}
		string str = to_string(x);
		std::reverse(str.begin(), str.end());

		// �h�Y�� 0
		while (str[0] == '0')
		{
			str = str.substr(1);
		}

		// �B�z�t��
		int sign = 1;
		if (str[str.size() - 1] == '-')
		{
			sign = -1;
			str = str.substr(0, str.size() - 1);
		}

		// �B�z�̫᪺�F��
		if (str.size() < 10)
		{
			return sign * stoi(str);
		}

		else if (str.size() > 10)
		{
			return 0;
		}

		else // str.size() == 10
		{
			int val = stoi(str.substr(0, 9));

			if (val > (INT_MAX / 10))
			{
				return 0;
			}

			else if (val < (INT_MAX / 10))
			{
				return sign * stoi(str);
			}
			 
			else // val == (INT_MAX / 10)
			{
				if (stoi(str.substr(9)) > 8)
				{
					return 0;
				}

				else if (stoi(str.substr(9)) < 8)
				{
					return sign * stoi(str);
				}

				else  // stoi(str.substr(9)) == 8
				{
					if (sign > 0)
					{
						return 0;
					}

					else
					{
						return sign * stoi(str);
					}
				}
			}
		}
	}
};