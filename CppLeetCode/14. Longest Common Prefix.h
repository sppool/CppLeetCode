//Runtime: 4 ms, faster than 73.39 % of C++ online submissions for Longest Common Prefix.
//Memory Usage: 9.1 MB, less than 77.76 % of C++ online submissions for Longest Common Prefix.

#pragma once

#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		if (strs.size() == 0)
			return "";
		if (strs.size() == 1)
			return strs[0];

		int min_str = strs[0].size();
		int n = strs.size();
		int l;
		// 獲取最短的字串長度
		for (int i = 1; i < n; i++)
		{
			l = strs[i].size();
			if (l < min_str)
			{
				min_str = l;
			}
		}
		//cout << "min: " << min_str << endl;
		int res_l = 0;
		bool break_ = false;
		for (int i = 0; i < l; i++)
		{
			char check = strs[0][i];

			for (int j = 1; j < n; j++)
			{
				if (strs[j][i] != check)
				{
					break_ = true;
					break;
				}
				else
				{
					if (j == n - 1)
					{
						res_l++;
					}
				}
			}
			if (break_)
				break;
		}

		if (res_l == 0)
			return "";

		else
		{
			return strs[0].substr(0, res_l);
		}
	}
};