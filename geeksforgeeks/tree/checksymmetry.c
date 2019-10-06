//SYMMETRIC TREE
/*
Given a Binary Tree of size N, your task is to complete the function isSymettric(), that check whether a binary is Symmetric or not, i.e. the binary tree is Mirror image of itself or not.
For example:
The following binary tree is symmetric:

        1
      /   \
    2       2
  /   \   /   \
 3     4 4     3

But the following is not:

       1
     /   \
    2      2
     \      \
      3      3
Input:

The function takes a single argument as input, the root node of the binary tree. There will be T test cases and for each test case the function will be called separately. 
 

Output:
For each testcase the function should return a boolean value.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
3
1 1
1 2 L 1 2 R 0
2 1
10 20 R 10 20 L 20 30 R 5
2 2
10 20 R 10 20 L 10 20 R 10 20 L 20 30 L 100 

Output:
True
False
True
*/

bool isMirror(struct Node *root1, struct Node *root2) 
{ 
    if (root1 == NULL && root2 == NULL) 
        return true; 
  
    if (root1 && root2 && root1->key == root2->key) 
        return isMirror(root1->left, root2->right) && 
               isMirror(root1->right, root2->left); 
  
    return false; 
} 
  
bool isSymmetric(struct Node* root) 
{ 
    return isMirror(root, root); 
} 