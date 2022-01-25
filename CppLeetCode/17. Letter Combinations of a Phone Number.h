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
	map<char, string> dict = { {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"} };

	vector<string> letterCombinations(string digits)
	{
		vector<string> res;
		if (digits == "")
		{
			return res;
		}
	}
};
