//Runtime: 45 ms, faster than 67.72 % of C++ online submissions for Intersection of Two Linked Lists.
//Memory Usage: 14.4 MB, less than 99.17 % of C++ online submissions for Intersection of Two Linked Lists.

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
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
	{
		if (!headA || !headB)
		{
			return nullptr;
		}

		ListNode* pA = headA;
		ListNode* pB = headB;
		while (pA != pB)
		{
			pA = (pA) ? pA->next : headB;
			pB = (pB) ? pB->next : headA;
		}

		return pA;
	}
};