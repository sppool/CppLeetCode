//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Subsets.
//Memory Usage: 15.9 MB, less than 20.82 % of C++ online submissions for Subsets.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(const vector<int>& nums)
    {
        int count = nums.size();
        vector<int> tmp; // empty
        Do(nums, tmp, 0, count);

        return res;
    }

    void Do(const vector<int>& nums, vector<int> v, int ind, int count)
    {
        if (ind == count)
        {
            res.push_back(v);

            return;
        }

        // 不加入元素 遞迴
        Do(nums, v, ind + 1, count);
        // 加入元素 遞迴
        v.push_back(nums[ind]);
        Do(nums, v, ind + 1, count);
    }
};