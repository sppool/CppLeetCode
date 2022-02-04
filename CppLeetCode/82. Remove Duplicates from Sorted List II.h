//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Remove Duplicates from Sorted List II.
//Memory Usage: 11 MB, less than 99.71 % of C++ online submissions for Remove Duplicates from Sorted List II.

/*
root  head  tmp
 s ->  a -> null
 s ->  a ->  a -> null
 s ->  a ->  b
 s ->  a ->  a ->  b

 tmp >> == null or b
 tmp == null (stop) root -> null or root -> head -> null
 tmp == b (head == b) root -> b  or root -> a -> b
*/

#pragma once

#include <iostream>
using namespace std;

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
	ListNode* deleteDuplicates(ListNode* head)
	{
		if (!head)
		{
			return nullptr;
		}
		ListNode root = ListNode((head->val) - 1, head);
		ListNode* root_ = &root;
		bool run;
		do
		{
			run = IsNextNodeSameElement(root_);
		} while (run);

		return root.next;
	}

	bool IsNextNodeSameElement(ListNode*& root)
	{
		bool del_head = false;
		ListNode* head = root->next;
		ListNode* tmp = head->next;
		int val = head->val;

		while (tmp && tmp->val == val)
		{
			tmp = tmp->next;
			del_head = true;
		}

		if (!tmp) // tmp = nullptr
		{
			if (del_head)
			{
				root->next = nullptr;
			}

			return false;
		}

		else
		{
			if (del_head)
			{
				root->next = tmp;
			}
			else
			{
				root = head;
			}
			return true;
		}

	}
};