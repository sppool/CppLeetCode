//Runtime: 3 ms, faster than 84.88 % of C++ online submissions for Search a 2D Matrix.
//Memory Usage: 9.4 MB, less than 78.58 % of C++ online submissions for Search a 2D Matrix.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target)
	{
		int m = matrix.size();
		int n = matrix[0].size();

		for (int j = 0; j < m; ++j)
		{
			if (matrix[j][0] <= target && target <= matrix[j][n - 1])
			{
				for (int i = 0; i < n; ++i)
				{
					if (matrix[j][i] == target)
					{
						return true;
					}

				}

				break;
			}
		}

		return false;

	}
};