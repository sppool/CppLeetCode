//Runtime: 23 ms, faster than 75.98 % of C++ online submissions for Merge k Sorted Lists.
//Memory Usage: 13.5 MB, less than 38.33 % of C++ online submissions for Merge k Sorted Lists.

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
	// lists �������X�� �~���O(logN)�覡��
	ListNode* mergeKLists(vector<ListNode*>& lists)
	{
		if (lists.size() == 0)
		{
			return nullptr;
		}

		if (lists.size() == 1)
		{
			return lists[0];
		}


		// lists ���W�L��Ө���X �b���j!!
		vector<ListNode*> res;

		for (int i = 0; i < (lists.size() / 2); i++)
		{
			res.push_back(mergeTwoLists(lists[2 * i], lists[(2 * i) + 1]));
		}
		if ((lists.size() % 2) == 1)
		{
			res.push_back(*lists.rbegin());
		}

		return mergeKLists(res);
	}



	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
	{
		// �ˤ@�Ӱ��}�Y�h��̤p�ȱ��W
		ListNode root = ListNode();
		ConnectNext(&root, list1, list2);

		return root.next;
	}

	void ConnectNext(ListNode* st, ListNode* list1, ListNode* list2)
	{
		if (!list1 || !list2) // ���@�Ө���Y�F ���W�̫�@��
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