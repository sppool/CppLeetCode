//Runtime: 20 ms, faster than 91.23 % of C++ online submissions for Remove Linked List Elements.
//Memory Usage: 15 MB, less than 82.08 % of C++ online submissions for Remove Linked List Elements.

#pragma once

#include <iostream>
using namespace std;
#include <vector>

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
	ListNode* removeElements(ListNode* head, int val)
	{
		if (head == nullptr)
		{
			return nullptr;
		}

		ListNode fake = ListNode(0, head);
		ListNode* tmp = &fake;

		do
		{
			if (tmp->next->val == val)
			{
				tmp->next = tmp->next->next;
			}
			else
			{
				tmp = tmp->next;
			}

		} while (tmp->next != nullptr);

		return fake.next;
	}
};