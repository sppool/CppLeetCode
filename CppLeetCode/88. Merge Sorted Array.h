//Runtime: 3 ms, faster than 68.19 % of C++ online submissions for Merge Sorted Array.
//Memory Usage: 8.9 MB, less than 99.43 % of C++ online submissions for Merge Sorted Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		int i = m - 1;
		int j = n - 1;
		int curr = m + n - 1;

		while (curr != -1)
		{
			if (i == -1)
			{
				nums1[curr--] = nums2[j--];
				continue;
			}
			if (j == -1)
			{
				nums1[curr--] = nums1[i--];
				continue;
			}

			nums1[curr--] = (nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--];
		}
	}
};