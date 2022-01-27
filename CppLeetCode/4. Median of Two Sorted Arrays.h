//Runtime: 28 ms, faster than 83.84 % of C++ online submissions for Median of Two Sorted Arrays.
//Memory Usage: 89.3 MB, less than 86.18 % of C++ online submissions for Median of Two Sorted Arrays.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		double res;
		int n = nums1.size() + nums2.size();

		bool odd = n % 2;
		int end = n / 2;
		int smallone = 0; //init
		int bigone = smallone;

		while ((n-nums1.size() - nums2.size()) <= end)
		{
			// 某個nums空了
			if (nums1.empty())
			{
				bigone = smallone;
				smallone = *nums2.rbegin();
				nums2.pop_back();
				continue;
			}
			if (nums2.empty())
			{
				bigone = smallone;
				smallone = *nums1.rbegin();
				nums1.pop_back();
				continue;
			}

			// 比兩個nums最大值誰大, 並找尋下一個小值.
			if (*nums1.rbegin() > *nums2.rbegin())
			{
				bigone = smallone;
				smallone = *nums1.rbegin();
				nums1.pop_back();
			}
			else
			{
				bigone = smallone;
				smallone = *nums2.rbegin();
				nums2.pop_back();
			}
		}

		//cout << "bigone => " << bigone << endl;
		//cout << "smallone => " << smallone << endl;

		// 判斷奇偶
		if (odd)
			res = (double)smallone;
		else
			res = ((double)bigone + (double)smallone) / 2;

		return res;
	}
};