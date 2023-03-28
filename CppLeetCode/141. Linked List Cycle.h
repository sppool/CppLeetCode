//Runtime: 28 ms, faster than 10.40 % of C++ online submissions for Linked List Cycle.
//Memory Usage: 11 MB, less than 8.92 % of C++ online submissions for Linked List Cycle.

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
	bool hasCycle(ListNode* head)
	{
		if (!head)
		{
			return false;
		}

		map<ListNode*, int> dic;
		ListNode* tmp = head;

		do
		{
			dic[tmp]++;
			if (dic[tmp] == 2)
			{
				return true;
			}

			tmp = tmp->next;
		} while (tmp != nullptr);

		return false;
	}
};
