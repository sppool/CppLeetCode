//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for House Robber II.
//Memory Usage: 7.8 MB, less than 82.67 % of C++ online submissions for House Robber II.

#pragma once

/* 198. House Robber
	a   b   c
n   0   a (a|b)�j��  (�S���̤j��)
	 ->  ->
y   a   b  a+c      (�����̤j��)

���D���� ����Y�����i����:
�i�H���� (�����̫�@��)(�����Ĥ@��) ��̪��̤j�Ȧb���
*/

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	int rob(vector<int>& nums)
	{
		int n = nums.size();

		if (n == 1)
		{
			return nums[0];
		}

		if (n == 2)
		{
			return (nums[0] > nums[1]) ? nums[0] : nums[1];
		}

		// �����̫�@��
		int arr_no = 0;
		int arr_yes = nums[0];
		int tmp_no;

		for (int i = 1; i < n-1; i++)
		{
			tmp_no = arr_no;
			arr_no = (arr_no < arr_yes) ? arr_yes : arr_no;
			arr_yes = tmp_no + nums[i];
		}
		int res1 = (arr_no < arr_yes) ? arr_yes : arr_no;

		// �����Ĥ@��
		arr_no = 0;
		arr_yes = nums[1];

		for (int i = 2; i < n; i++)
		{
			tmp_no = arr_no;
			arr_no = (arr_no < arr_yes) ? arr_yes : arr_no;
			arr_yes = tmp_no + nums[i];
		}
		int res2 = (arr_no < arr_yes) ? arr_yes : arr_no;

		return (res1 > res2) ? res1 : res2;
	}
};