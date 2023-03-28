//Runtime: 4 ms, faster than 81.88 % of C++ online submissions for Maximum Population Year.
//Memory Usage: 8.1 MB, less than 36.05 % of C++ online submissions for Maximum Population Year.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
	int maximumPopulation(vector<vector<int>>& logs)
	{
		vector<int> diff_Arr = vector<int>(101, 0);
		for (vector<int> log : logs)
		{
			diff_Arr[log[0] - 1950]++;
			diff_Arr[log[1] - 1950]--;
		}

		int mx = 0;
		int year;
		int ing = 0;

		for (int i = 0; i < diff_Arr.size(); i++)
		{
			ing += diff_Arr[i];
			if (ing > mx)
			{
				year = 1950 + i;
				mx = ing;
			}
		}

		return year;
	}
};