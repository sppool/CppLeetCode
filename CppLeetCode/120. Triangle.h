//Runtime: 4 ms, faster than 93.86 % of C++ online submissions for Triangle.
//Memory Usage: 8.5 MB, less than 98.64 % of C++ online submissions for Triangle.

//由下層往上數 找最小路徑

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int minimumTotal(vector<vector<int>>& triangle)
	{
		int n = triangle.size();

		for (int i = n - 1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				triangle[i - 1][j] += min(triangle[i][j], triangle[i][j + 1]);
			}
		}

		return triangle[0][0];
	}
};