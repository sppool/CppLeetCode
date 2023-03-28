//Runtime: 192 ms, faster than 5.33 % of C++ online submissions for Sum of All Subset XOR Totals.
//Memory Usage: 62.4 MB, less than 5.05 % of C++ online submissions for Sum of All Subset XOR Totals.

#pragma once

/*
    int subsetXORSum2(vector<int>& nums) // 超神
    {
        int res = 0;
        int n = nums.size();
        for (auto num : nums) {
            res |= num;
        }
        return res << (n - 1);
    }
*/

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int subsetXORSum(vector<int>& nums)
    {
        subsets(nums);
        int res = 0;
        for (vector<int> nums : Subset_res)
        {
            res += subsetXOR(nums);
        }

        return res;
    }
    int subsetXOR(vector<int>& nums)
    {
        int res = 0;
        for (int num : nums)
        {
            res ^= num;
        }

        return res;
    }


    // 78. Subset!!
    vector<vector<int>> Subset_res;
    vector<vector<int>> subsets(const vector<int>& nums)
    {
        int count = nums.size();
        vector<int> tmp; // empty
        Do(nums, tmp, 0, count);

        return Subset_res;
    }

    void Do(const vector<int>& nums, vector<int> v, int ind, int count)
    {
        if (ind == count)
        {
            Subset_res.push_back(v);

            return;
        }

        // 不加入元素 遞迴
        Do(nums, v, ind + 1, count);
        // 加入元素 遞迴
        v.push_back(nums[ind]);
        Do(nums, v, ind + 1, count);
    }
};