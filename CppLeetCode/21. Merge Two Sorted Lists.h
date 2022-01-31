//Runtime: 4 ms, faster than 94.73 % of C++ online submissions for Merge Two Sorted Lists.
//Memory Usage :14.9 MB, less than 44.70 % of C++ online submissions for Merge Two Sorted Lists.

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

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
	{
		// 弄一個假開頭去找最小值接上
		ListNode root = ListNode();
		ConnectNext(&root, list1, list2);

		return root.next;
	}

	void ConnectNext(ListNode* st, ListNode* list1, ListNode* list2)
	{
		if (!list1 || !list2) // 有一個到盡頭了 接上最後一個
		{
			st->next = list1 ? list1 : list2;

			return;
		}

		ListNode* tmp;
		if (list1->val < list2->val)
		{
			st->next = list1;
			ConnectNext(st->next, list1->next, list2);
		}

		else
		{
			st->next = list2;
			ConnectNext(st->next, list1, list2->next);
		}
	}
};