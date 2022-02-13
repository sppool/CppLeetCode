//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Word Pattern.
//Memory Usage: 6.6 MB, less than 18.69 % of C++ online submissions for Word Pattern.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>

class Solution
{
public:
	bool wordPattern(string pattern, string s)
	{

		s += " ";
		vector <string> s_arr;
		map<char, string> char2str;
		map<string, char> str2char;
		int start = 0;
		int end = 0;

		while (s.find(' ', end) != string::npos)
		{
			end = s.find(' ', end) + 1;
			string str = s.substr(start, end - start - 1);
			start = end;
			s_arr.push_back(str);
			cout << "str: " << str << endl;
		}

		if (s_arr.size() != pattern.length())
		{
			return false;
		}


		for (int i = 0; i < pattern.size(); i++)
		{
			string str = s_arr[i];

			if (char2str.count(pattern[i]) == 0)
			{
				char2str[pattern[i]] = str;
			}

			else
			{
				if (char2str[pattern[i]] != str)
				{
					return false;
				}
			}

			if (str2char.count(str) == 0)
			{
				str2char[str] = pattern[i];
			}
			else
			{

				if (str2char[str] != pattern[i])
				{
					return false;
				}
			}
		}

		return true;
	}
};