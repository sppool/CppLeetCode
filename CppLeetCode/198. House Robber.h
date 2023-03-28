//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for House Robber.
//Memory Usage: 7.6 MB, less than 75.11 % of C++ online submissions for House Robber.

#pragma once

/*
	a   b   c
n   0   a (a|b)�j��  (�S���̤j��)
     ->  ->
y   a   b  a+c      (�����̤j��)

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
		int arr_no = 0;
		int arr_yes = nums[0];
		int tmp_no;

		for (int i = 1; i < n; ++i)
		{
			tmp_no = arr_no;
			arr_no = (arr_no < arr_yes) ? arr_yes : arr_no;
			arr_yes = tmp_no + nums[i];
		}
		int res = (arr_no < arr_yes) ? arr_yes : arr_no;

		return res;
	}
};