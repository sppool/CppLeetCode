//Runtime: 12 ms, faster than 85.48 % of C++ online submissions for Delete Node in a Linked List.
//Memory Usage: 7.6 MB, less than 38.63 % of C++ online submissions for Delete Node in a Linked List.

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
	void deleteNode(ListNode* node)
	{
		while (true)
		{
			node->val = node->next->val;

			if (!node->next->next)
			{
				break;
			}

			node = node->next;
		}

		node->next = nullptr;
	}
};