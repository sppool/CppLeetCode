//Runtime: 8 ms, faster than 91.15 % of C++ online submissions for Remove Duplicates from Sorted List.
//Memory Usage: 11.7 MB, less than 36.47 % of C++ online submissions for Remove Duplicates from Sorted List.

/*
head   tmp
 a  -> null
 a  ->  a -> null
 a  ->  b
 a  ->  a ->  b

 tmp >> == null or b
 tmp == null (stop) head -> null
 tmp == b (head == b) head -> b, head = b
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


		bool run;
		do
		{
			run = IsNextNodeSameElement(head);
		} while (run);

		return root.next;
	}

	bool IsNextNodeSameElement(ListNode*& head)
	{
		int val = head->val;
		ListNode* tmp = head->next;

		while (tmp && tmp->val == val)
		{
			tmp = tmp->next;
		}

		if (!tmp) // tmp = nullptr
		{
			head->next = nullptr;

			return false;
		}

		else
		{
			head->next = tmp;
			head = tmp;
			return true;
		}

	}
};