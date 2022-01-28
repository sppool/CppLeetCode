//Runtime: 7 ms, faster than 76.53 % of C++ online submissions for Merge Two Sorted Lists.
//Memory Usage: 14.9 MB, less than 44.07 % of C++ online submissions for Merge Two Sorted Lists.

#pragma once

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
		if (!list1 || !list2)
		{
			return list1 ? list1 : list2;
		}

		// 弄一個假開頭去找最小值接上
		ListNode fake_first = ListNode();
		ListNode* tmp = &fake_first;
		ListNode* p1 = list1;
		ListNode* p2 = list2;

		while ((p1 != nullptr) || (p2 != nullptr))
		{
			if (p1 == nullptr)
			{
				tmp->next = p2;
				tmp = p2;
				p2 = p2->next;
				continue;
			}
			if (p2 == nullptr)
			{
				tmp->next = p1;
				tmp = p1;
				p1 = p1->next;
				continue;
			}

			if (p1->val < p2->val)
			{
				tmp->next = p1;
				tmp = p1;
				p1 = p1->next;
			}
			else
			{
				tmp->next = p2;
				tmp = p2;
				p2 = p2->next;
			}
		}


		return fake_first.next;
	}
};