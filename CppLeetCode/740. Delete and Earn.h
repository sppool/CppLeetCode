//Runtime: 4 ms, faster than 94.28 % of C++ online submissions for Deleteand Earn.
//Memory Usage: 9.9 MB, less than 56.59 % of C++ online submissions for Deleteand Earn.

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

		for (int i = 0; i < nums.size(); ++i)
		{
			//���s���J��key���|�Q�л\
			//dict.insert(pair<int, int>(nums[i], 0));
			//�T�O�s��("�o�̭��Ʃw�q���|�л\�­�")
			//dict.insert(pair<int, int>(nums[i] + 1, 0)); // ���j���� ���ݭn+-���[�J
			dict[nums[i]]++; // �i�H���ج� 0 ???
		}

		int key = dict.begin()->first - 1;
		// �ͦ��s��vals �]�T�O�s�� (�Q��map�����O������ �p��j)
		for (auto it = dict.begin(); it != dict.end(); it++)
		{
			if (it->first != ++key) // �T�w�s��
			{
				vals.push_back(0); // �h��@�ӹj�����s�� key
				key = it->first; // update key �s��N���Χ�s
			}

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