//Runtime: 4 ms, faster than 99.94 % of C++ online submissions for Jump Game II.
//Memory Usage: 16.5 MB, less than 60.28 % of C++ online submissions for Jump Game II.

#pragma once

//nums[0] 為第一步可以跳躍到的距離! 第一步距離內的數字可以更新第二步的最遠距離...

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int jump(vector<int>& nums)
	{
		int n = nums.size();
		if (n == 1)
		{
			return 0;
		}

		int step = 1;
		int dis = nums[0];
		int new_dis = dis;
		int st_ind = 0;

		while (dis < (n - 1))
		{
			for (int i = st_ind; i <= dis; ++i)
			{
				new_dis = max(new_dis, (nums[i] + i));
			}

			step++;
			st_ind = dis + 1;
			dis = new_dis;
		}

		return step;
	}
};