//LOWEST COMMON ANCESTORS
/*
Given a Binary Search Tree and 2 nodes value n1 and n2, your task is to find the lowest common ancestor(LCA) of the two nodes .
Note: Duplicates are not inserted in the BST.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains three lines of input.
The first line contains N, the number of nodes of the BST.
The second line contains the values of the nodes, each separated by a space.
The third line contains the two values n1 and n2 separated by a space.

Output Format:
For each testcase, in a new line, print the LCA of n1 and n2.

Your Task:
This is a function problem. You don't have to take any input. You are required to complete the function LCA() that takes node, n1, n2 as parameters and returns the node that is LCA of n1 and n2.

Constraints:
1 <= T <= 200
1 <= N <= 100
1 <= Node value <= 1000

Example:
Input
2
6
5 4 6 3 7 8
7 8
6
12 14 15 10 9 8
8 15

Output 
7
12
*/
struct node *lca(struct node* root, int n1, int n2) 
{ 
    if (root == NULL) return NULL; 
  
    if (root->data > n1 && root->data > n2) 
        return lca(root->left, n1, n2); 
  
    if (root->data < n1 && root->data < n2) 
        return lca(root->right, n1, n2); 
  
    return root; 
} 
