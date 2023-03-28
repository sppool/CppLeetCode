//Runtime: 19 ms, faster than 21.33 % of C++ online submissions for Linked List Cycle II.
//Memory Usage: 9.8 MB, less than 9.84 % of C++ online submissions for Linked List Cycle II.

#pragma once

#include <iostream>
using namespace std;
#include <map>

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
	ListNode* detectCycle(ListNode* head)
	{
		if (!head)
		{
			return nullptr;
		}

		map<ListNode*, int> dic;
		ListNode* tmp = head;

		do
		{
			if (dic.count(tmp) == 1)
			{
				return tmp;
			}

			dic[tmp];
			tmp = tmp->next;
		} while (tmp != nullptr);

		return nullptr;
	}
};