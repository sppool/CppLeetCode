//Runtime: 16 ms, faster than 5.42% of C++ online submissions for Permutations.
//Memory Usage: 9.1 MB, less than 7.73% of C++ online submissions for Permutations.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
	vector<vector<int>> res_list;

	vector<vector<int>> permute(vector<int>& nums)
	{
		vector<int> v_empty;
		Pn(nums, v_empty); // 遞迴

		return res_list;
	}

	// 遞迴
	void Pn(vector<int> nums, vector<int> sublst)
	{
		if (nums.empty())
		{
			res_list.push_back(sublst);
		}

		else
		{
			for (int i = 0; i < nums.size(); ++i)
			{
				sublst.push_back(nums[i]);
				vector<int> new_nums = nums; // 複製一份nums 並刪除取的元素
				new_nums.erase(new_nums.begin() + i);
				Pn(new_nums, sublst);
				sublst.pop_back(); // 給下一輪使用
			}
		}
	}
};