//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for House Robber II.
//Memory Usage: 7.8 MB, less than 82.67 % of C++ online submissions for House Robber II.

#pragma once

/* 198. House Robber
	a   b   c
n   0   a (a|b)大者  (沒偷最大值)
	 ->  ->
y   a   b  a+c      (有偷最大值)

本題環狀 表示頭尾不可都偷:
可以視為 (不偷最後一間)(不偷第一間) 兩者的最大值在比較
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

		// 不偷最後一間
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

		// 不偷第一間
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