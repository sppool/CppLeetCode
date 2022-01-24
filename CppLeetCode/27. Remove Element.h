//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Remove Element.
//Memory Usage: 8.9 MB, less than 34.87 % of C++ online submissions for Remove Element.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int n = nums.size();
        int ind = 0;
        while (ind < n)
        {
            if (nums[ind] == val)
            {
                nums.erase(nums.begin() + ind); // 刪除 vector 元素
                n--; // 少一個元素
            }
            else
            {
                ind++;
            }
        }

        return n;
    }
};
