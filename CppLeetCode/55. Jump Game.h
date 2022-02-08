//Runtime: 36 ms, faster than 99.84 % of C++ online submissions for Jump Game.
//Memory Usage: 48.5 MB, less than 24.50 % of C++ online submissions for Jump Game.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	bool canJump(vector<int>& nums)
	{
		int n = nums.size();
		int i = 0;
		int d = 0; // �ثe�̻������
		int cur; // ��U�o��i�H�����
		do
		{
			cur = (i + nums[i]);
			d = (d > cur) ? d : cur;
			if (d >= n - 1)
			{
				return true;
			}
		} while (d >= ++i && i < n);

			return false;
	}
};
