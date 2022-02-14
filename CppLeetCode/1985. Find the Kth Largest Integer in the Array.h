//Runtime: 244 ms, faster than 78.61 % of C++ online submissions for Find the Kth Largest Integer in the Array.
//Memory Usage: 55.3 MB, less than 67.88 % of C++ online submissions for Find the Kth Largest Integer in the Array.

#pragma once

// 這題學習 Lambda cmp 排序的函數
// https://shengyu7697.github.io/std-sort/
// https://officeguide.cc/cpp-sort-function-tutorial-examples/

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>

class Solution 
{
public:
    string kthLargestNumber(vector<string>& nums, int k) 
    {
        auto cmp = [](const string& s1, const string& s2) -> bool 
        {
            // 字符長度比大小
            if (s1.size() > s2.size()) 
            {
                return true;
            }
            else if (s1.size() < s2.size()) 
            {
                return false;
            }
            else 
            {
                // 
                return s1 > s2;
            }
        };

        sort(nums.begin(), nums.end(), cmp);

        return nums[k - 1];
    }
};