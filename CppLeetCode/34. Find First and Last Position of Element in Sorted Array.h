//Runtime: 5 ms, faster than 80.05 % of C++ online submissions for Find Firstand Last Position of Element in Sorted Array.
//Memory Usage: 13.5 MB, less than 84.36 % of C++ online submissions for Find Firstand Last Position of Element in Sorted Array.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> res = { -1, -1 };
		if (nums.size() == 0) // �ŦC��
		{
			return res;
		}

		if (*nums.begin() > target || target > *nums.rbegin()) // ���b�d��
		{
			return res;
		}

		int r = 0;
		int l = nums.size() - 1;
		int mid = (r + l) / 2;

		do 
		{
			if (nums[r] == target)
			{
				return FindRes(nums, target, r);
			}
			if (nums[l] == target)
			{
				return FindRes(nums, target, l);
			}
			if (nums[mid] == target)
			{
				return FindRes(nums, target, mid);
			}

			if (nums[r] < target && target < nums[mid]) // ���b��
			{
				l = mid;
			}
			else // �k�b��
			{
				r = mid;
			}

			mid = (r + l) / 2;
		} 
		while (r != mid);

		return res; // �S�����
	}

	vector<int> FindRes(vector<int>& nums, int target, int ind)
	{
		int first = ind;
		int last = ind;

		while (first >= 0 && nums[first] == target) // �W�L�d�� ������ (&&���P�_���)
		{
			first--;
		}

		while (last <= (nums.size() - 1) && nums[last] == target) // �W�L�d�� ������ (&&���P�_���)
		{
			last++;
		}

		return vector<int>{++first, --last};
	}
};