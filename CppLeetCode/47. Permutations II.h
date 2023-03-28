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
		map<int, int> dic; // �@�Ӭ����ƦC���������M�ƥت�dict
		vector<int> nums_only; // �@�ӼƦC�����X(������)
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

		vector<int> v_empty; // �żƦC
		Pn(nums_only, v_empty, dic); // ���j

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
				vector<int> new_nums_only = nums_only; // �ƻs�@��nums �çR����������
				sublst.push_back(nums_only[i]);
				if (--new_dic[nums_only[i]] == 0)
				{
					new_nums_only.erase(new_nums_only.begin() + i);
				}
				
				Pn(new_nums_only, sublst, new_dic); // ���j
				sublst.pop_back(); // ���U�@���ϥ�
			}
		}
	}
};