//Runtime: 4 ms, faster than 94.61 % of C++ online submissions for Rotate List.
//Memory Usage: 11.8 MB, less than 54.91 % of C++ online submissions for Rotate List.

#pragma once

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution
{
public:
	ListNode* rotateRight(ListNode* head, int k)
	{
		if (!head)
		{
			return nullptr;
		}

		ListNode* root = new ListNode();
		ListNode* tmp = head;
		int num = 1;
		// 找尾巴
		while (tmp->next)
		{
			tmp = tmp->next;
			num++;
		}
		// 尾接上頭
		tmp->next = head;

		// 求餘數
		k = k % num;

		// 移動tmp 到要截斷的地方
		for (int i = 0; i < (num - k); i++) 
		{
			tmp = tmp->next;
		}

		root->next = tmp->next;
		tmp->next = nullptr;

		return root->next;
	}
};