//Runtime: 1080 ms, faster than 10.58 % of C++ online submissions for Queries on Number of Points Inside a Circle.
//Memory Usage: 167.3 MB, less than 7.26 % of C++ online submissions for Queries on Number of Points Inside a Circle.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries)
	{
		vector<int> res;
		for (vector<int> arr : queries)
		{
			int sum = 0;
			for (vector<int> point : points)
			{
				sum += (distance(arr, point) <= arr[2]) ? 1 : 0;
			}

			res.push_back(sum);
		}

		return res;
	}

	double distance(vector<int>& p1, vector<int>& p2)
	{
		int dx = p1[0] - p2[0];
		int dy = p1[1] - p2[1];

		double dis = sqrt((double)(pow(dx, 2) + pow(dy, 2)));

		return dis;
	}
};