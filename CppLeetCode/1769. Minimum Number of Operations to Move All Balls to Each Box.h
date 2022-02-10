//Runtime: 48 ms, faster than 61.81 % of C++ online submissions for Minimum Number of Operations to Move All Balls to Each Box.
//Memory Usage : 9.2 MB, less than 55.17 % of C++ online submissions for Minimum Number of Operations to Move All Balls to Each Box.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> minOperations(string boxes)
	{
		int n = boxes.length();
		vector<int>res = vector<int>(n, 0);

		vector<int> BallInd;
		for (int i = 0; i < n; i++)
		{
			if (boxes[i] == '1')
			{
				BallInd.push_back(i);
			}
		}

		for (int i = 0; i < n; i++)
		{
			res[i] = GetVal(BallInd, i);
		}

		return res;
	}


	int GetVal(vector<int> &v, int ind)
	{
		int sum = 0;
		for (int val : v)
		{
			sum += abs(val - ind);
		}

		return sum;
	}
};