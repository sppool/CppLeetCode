//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Letter Combinations of a Phone Number.
//Memory Usage: 6.5 MB, less than 60.91 % of C++ online submissions for Letter Combinations of a Phone Number.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:

	map<char, string> dict = { {'2', "abc"},
		{'3'  , "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"} };

	vector<string> letterCombinations(string digits)
	{
		vector<string> res;
		if (digits == "")
		{
			return res;
		}

		else
		{
			// init
			int n = 1;
			string* p = new string[1];
			p[0] = "";

			for (int i = 0; i < digits.size(); i++)
			{
				p = pool(p, n, digits[i]);
			}

			for (int i = 0; i < n; i++)
			{
				res.push_back(p[i]);
			}
			delete[] p;

			return res;
		}
	}

	string* pool(string in[], int& in_len, char c)
	{
		int len = dict[c].size();

		string* new_p = new string[in_len * len];

		for (int i = 0; i < in_len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				int ind = (i * len) + j;
				new_p[ind] = in[i] + dict[c][j];
				cout << new_p[ind] << endl;
			}
		}

		in_len *= len;
		delete[] in;

		//cout << "---------" << endl;
		return new_p;
	}
};
