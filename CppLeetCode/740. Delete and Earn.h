//Runtime: 12 ms, faster than 49.28 % of C++ online submissions for Deleteand Earn.
//Memory Usage: 12.5 MB, less than 24.50 % of C++ online submissions for Deleteand Earn.

#pragma once

/*

把同樣數組整合 並乘以該數量
2, 2, 3, 3, 3, 4,
ind  2  3  4  (這裡要相連 不足自己補上)
val  4  9  4  -> 198. House Robber 相同動態規劃

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
		// 建立出傳入 198 的新vector
		map<int, int> dict; // 利用map本身保持有序 小到大
		vector<int> vals;

		for (int i = 0; i < nums.size(); i++)
		{
			// 重新插入的key不會被覆蓋
			dict.insert(pair<int, int>(nums[i], 0));
			// 確保連續 ("這裡重複定義不會覆蓋舊值")
			dict.insert(pair<int, int>(nums[i] + 1, 0)); // 間隔之用 不需要+-都加入
			dict[nums[i]]++;
		}
		// 生成新的vals 也確保連續 (利用map本身保持有序 小到大)
		for (auto it = dict.begin(); it != dict.end(); it++)
		{
			vals.push_back(it->first * it->second);
		}
		//傳入 198 的func
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