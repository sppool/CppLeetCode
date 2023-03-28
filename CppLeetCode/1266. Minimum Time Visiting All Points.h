//Runtime: 7 ms, faster than 86.71 % of C++ online submissions for Minimum Time Visiting All Points.
//Memory Usage: 10.9 MB, less than 6.69 % of C++ online submissions for Minimum Time Visiting All Points.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int minTimeToVisitAllPoints(vector<vector<int>>& points)
	{
		int res = 0;
		for (int i = 0; i < points.size() - 1; ++i)
		{
			res += TwoPointStep(points[i], points[i + 1]);
		}

		return res;
	}

	int TwoPointStep(vector<int> p1, vector<int> p2)
	{
		return max(abs(p1[0] - p2[0]), abs(p1[1] - p2[1]));
	}
};