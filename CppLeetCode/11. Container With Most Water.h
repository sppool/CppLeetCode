//Runtime: 160 ms, faster than 22.28% of C++ online submissions for Container With Most Water.
//Memory Usage: 59 MB, less than 80.18% of C++ online submissions for Container With Most Water.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
	int maxArea(vector<int>& height)
	{
		int st_ind = 0;
		int en_ind = height.size() - 1;
		int max_val = 0;
		int w;
		int h;

		while (st_ind != en_ind)
		{
			w = en_ind - st_ind;
			if (height[st_ind] < height[en_ind])
			{
				h = height[st_ind];
				st_ind += 1;
			}
			else
			{
				h = height[en_ind];
				en_ind -= 1;
			}

			if (w * h > max_val)
			{
				max_val = w * h;
			}
		}
		return max_val;
	}
};