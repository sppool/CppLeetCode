//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Swap Nodes in Pairs.
//Memory Usage: 7.5 MB, less than 54.73 % of C++ online submissions for Swap Nodes in Pairs.

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
	ListNode* swapPairs(ListNode* head)
	{
		if (!head) // empty
		{
			return nullptr;
		}

		if (!head->next) // only one
		{
			return head;
		}

		ListNode root = ListNode();
		ListNode* tmp_head = &root;
		ListNode* tmp_tail = head;
		ListNode* tmp;
		do
		{
			tmp = tmp_tail->next->next;
			tmp_tail->next->next = tmp_tail;
			tmp_head->next = tmp_tail->next;
			tmp_tail->next = tmp;

			tmp_head = tmp_tail;
			tmp_tail = tmp;

		} while (tmp_tail && tmp_tail->next);


		return root.next;
	}
};