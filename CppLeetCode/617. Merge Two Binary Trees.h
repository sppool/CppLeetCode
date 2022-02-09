//Runtime: 46 ms, faster than 55.40 % of C++ online submissions for Merge Two Binary Trees.
//Memory Usage: 32.2 MB, less than 87.18 % of C++ online submissions for Merge Two Binary Trees.

#pragma once

#include <iostream>
using namespace std;

//Definition for a binary tree node.
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
	{
		if (!root1 || !root2)
		{
			return (!root1) ? root2 : root1;
		}

		root1->val += root2->val;
		root1->left = mergeTrees(root1->left, root2->left);
		root1->right = mergeTrees(root1->right, root2->right);

		return root1;
	}
};