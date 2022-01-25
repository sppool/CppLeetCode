//Runtime: 12 ms, faster than 82.04 % of C++ online submissions for Two Sum.
//Memory Usage: 11.2 MB, less than 17.35 % of C++ online submissions for Two Sum.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
	map<char, string> dic = { {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"} };

	vector<string> letterCombinations(string digits)
	{
		vector<string> res = init(digits[0]);

		for (int i = 1; i < digits.size(); i++)
		{
			cout << "w" << endl;
			res = addone(res, digits[i]);
		}

		return res;
	}

	vector<string> init(char c)
	{
		vector<string> res;
		for (int i = 0; i < dic[c].size(); i++)
		{
			string str = "";
			str += dic[c][i];
			res.push_back(str);
		}

		return res;
	}

	vector<string> addone(vector<string>v, char c)
	{
		vector<string> res;
		for (int i = 0; i < dic[c].size(); i++)
		{
			for (int j = 0; j < v.size(); i++)
			{
				res.push_back(v[i] + dic[c][i]);
			}
		}

		return res;
	}



	vector<string> test(string digits)
	{
		vector<string> res = init(digits[0]);

		cout << &res << endl;

		return res;
	}

};
