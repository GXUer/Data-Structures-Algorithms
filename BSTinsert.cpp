#include<iostream>

typedef struct T{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):
		val(x), left(NULL), right(NULL) {}
}TreeNode;
