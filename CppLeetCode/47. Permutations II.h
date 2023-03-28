//Runtime: 28 ms, faster than 30.17% of C++ online submissions for Permutations II.
//Memory Usage: 19.7 MB, less than 9.86% of C++ online submissions for Permutations II.

#pragma once

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
	vector<vector<int>> res_list;

	vector<vector<int>> permuteUnique(vector<int>& nums)
	{
		map<int, int> dic; // 一個紀錄數列有的元素和數目的dict
		vector<int> nums_only; // 一個數列的集合(不重複)
		for (int i = 0; i < nums.size(); ++i)
		{
			if (dic.find(nums[i]) == dic.end())
			{
				dic[nums[i]] = 1;
				nums_only.push_back(nums[i]);
			}
			else
			{
				dic[nums[i]]++;
			}
		}

		vector<int> v_empty; // 空數列
		Pn(nums_only, v_empty, dic); // 遞迴

		return res_list;
	}

	void Pn(vector<int> nums_only, vector<int> sublst, map<int, int> dic)
	{
		if (nums_only.empty())
		{
			res_list.push_back(sublst);
		}

		else
		{
			for (int i = 0; i < nums_only.size(); ++i)
			{
				map<int, int> new_dic = dic;
				vector<int> new_nums_only = nums_only; // 複製一份nums 並刪除取的元素
				sublst.push_back(nums_only[i]);
				if (--new_dic[nums_only[i]] == 0)
				{
					new_nums_only.erase(new_nums_only.begin() + i);
				}
				
				Pn(new_nums_only, sublst, new_dic); // 遞迴
				sublst.pop_back(); // 給下一輪使用
			}
		}
	}
};