//Runtime: 12 ms, faster than 49.28 % of C++ online submissions for Deleteand Earn.
//Memory Usage: 12.5 MB, less than 24.50 % of C++ online submissions for Deleteand Earn.

#pragma once

/*

��P�˼Ʋվ�X �í��H�Ӽƶq
2, 2, 3, 3, 3, 4,
ind  2  3  4  (�o�̭n�۳s �����ۤv�ɤW)
val  4  9  4  -> 198. House Robber �ۦP�ʺA�W��

*/

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>

class Solution
{
public:
	int deleteAndEarn(vector<int>& nums)
	{
		// �إߥX�ǤJ 198 ���svector
		map<int, int> dict; // �Q��map�����O������ �p��j
		vector<int> vals;

		for (int i = 0; i < nums.size(); i++)
		{
			// ���s���J��key���|�Q�л\
			dict.insert(pair<int, int>(nums[i], 0));
			// �T�O�s�� ("�o�̭��Ʃw�q���|�л\�­�")
			dict.insert(pair<int, int>(nums[i] + 1, 0)); // ���j���� ���ݭn+-���[�J
			dict[nums[i]]++;
		}
		// �ͦ��s��vals �]�T�O�s�� (�Q��map�����O������ �p��j)
		for (auto it = dict.begin(); it != dict.end(); it++)
		{
			vals.push_back(it->first * it->second);
		}
		//�ǤJ 198 ��func
		int res = rob(vals);

		return res;
	}

	int rob(vector<int>& nums)
	{
		int n = nums.size();
		int arr_no = 0;
		int arr_yes = nums[0];
		int tmp_no;
		int tmp_yes;

		for (int i = 1; i < n; i++)
		{
			tmp_no = arr_no;
			tmp_yes = arr_yes;
			arr_no = (tmp_no < tmp_yes) ? tmp_yes : tmp_no;
			arr_yes = tmp_no + nums[i];
		}
		int res = (arr_no < arr_yes) ? arr_yes : arr_no;

		return res;
	}
};