//Runtime: 0 ms, faster than 100.00 % of C++ online submissions for Invert Binary Tree.
//Memory Usage: 9.7 MB, less than 38.78 % of C++ online submissions for Invert Binary Tree.

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
	TreeNode* invertTree(TreeNode* root) 
	{
		rot(root);

		return root;
	}

	void rot(TreeNode* tree) 
	{
		if (!tree)
		{
			return;
		}

		TreeNode* tmp = tree->left;
		tree->left = tree->right;
		tree->right = tmp;

		rot(tree->right);
		rot(tree->left);
	}
};