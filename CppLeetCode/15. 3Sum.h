//Runtime: 152 ms, faster than 36.65 % of C++ online submissions for 3Sum.
//Memory Usage: 20.1 MB, less than 51.26 % of C++ online submissions for 3Sum.

#pragma once

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Solution {
public:
    vector< vector<int> > threeSum(vector<int>& nums) 
    {
        vector<int> numsSet(3);
        vector< vector<int> > res;
        // 1.排序
        sort(nums.begin(), nums.end());
        int sum;
        int len = nums.size();
        // 2.拿出第一個數，轉化為兩數和問題。注意外層迴圈到倒數第三個數即可
        for (int i = 0; i < len - 2; i++) {
            sum = 0 - nums[i];
            numsSet[0] = nums[i];
            // 3.兩數和問題
            for (int j = i + 1, k = len - 1; j < k;) {
                if (nums[j] + nums[k] == sum) {
                    numsSet[1] = nums[j++];
                    numsSet[2] = nums[k--];
                    res.push_back(numsSet);
                    // 根據題目要求，跳過重複元素
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
                else if (nums[j] + nums[k] < sum)
                    j++;
                else
                    k--;
            }
            while (i < len - 2 && nums[i + 1] == nums[i])
                i++;
        }
        return res;
    }
};