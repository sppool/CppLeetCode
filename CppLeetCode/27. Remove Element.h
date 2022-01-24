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
                nums.erase(nums.begin() + ind); // �R�� vector ����
                n--; // �֤@�Ӥ���
            }
            else
            {
                ind++;
            }
        }

        return n;
    }
};
