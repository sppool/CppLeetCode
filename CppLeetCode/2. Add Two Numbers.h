//Runtime: 32 ms, faster than 71.84 % of C++ online submissions for Add Two Numbers.
//Memory Usage: 71.5 MB, less than 49.23 % of C++ online submissions for Add Two Numbers.

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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		// 弄一個假開頭
		ListNode root = ListNode();
		ListNode* tmp = &root;

		int carry = 0;

		while (l1 || l2 || carry != 0)
		{
			int l1val = l1 ? l1->val : 0;
			int l2val = l2 ? l2->val : 0;
			int sum = l1val + l2val + carry;
			int one_digit = sum % 10;
			tmp->next = new ListNode(one_digit);
			tmp = tmp->next;
			
			carry = sum / 10;
			l1 = l1 ? l1->next : l1;
			l2 = l2 ? l2->next : l2;
		}

		return root.next;
	}
};
