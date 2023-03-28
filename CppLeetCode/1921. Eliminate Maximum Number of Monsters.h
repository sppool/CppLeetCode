//Runtime: 174 ms, faster than 63.76 % of C++ online submissions for Eliminate Maximum Number of Monsters.
//Memory Usage: 85 MB, less than 42.59 % of C++ online submissions for Eliminate Maximum Number of Monsters.

#pragma once

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Solution 
{
public:
	int eliminateMaximum(vector<int>& dist, vector<int>& speed)
	{
		vector<int> BeforeStep;
		for (int i = 0; i < dist.size(); i++)
		{
			BeforeStep.push_back((dist[i] - 1) / speed[i]);
		}

		sort(BeforeStep.begin(), BeforeStep.end());

		for (int i = 0; i < BeforeStep.size(); i++)
		{
			if (i > BeforeStep[i])
			{
				return i;
			}
		}

		return dist.size();
	}
};