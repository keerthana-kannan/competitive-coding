/*
Given a Binary Tree and two nodes value n1 and n2. The task is to find the lowest common ancestor of the given two nodes.

Input Format:
The input contains T, denoting number of testcases. For each testcase there will be third lines. The first line contains number of edges. The second line contains relation between nodes. The second line contains two nodes and a character separated by space. The first node denotes data value, second node denotes where it will be assigned to the previous node which will depend on character 'L' or 'R' i.e. the 2nd node will be assigned as left child to the 1st node if character is 'L' and so on. The third line contains two nodes separated by space for which you have to compute LCA. The first node of second line is root node. The struct or class Node has a data part which stores the data, pointer to left child and pointer to right child. There are multiple test cases. For each test case, the function will be called individually.

Output Format:
For each testcase, in a new line, print the Lowest Common Ancestor of the two nodes.

Your Task:
This is a function problem. You don't have to read the input. Just complete the function lca() that takes node, n1, and n2 as parameter and returns LCA node as output.

Constraints:
1 <= T <= 100
1 <= Number of nodes <= 100
1 <= Data of a node <= 1000

Example:
Input
2
2
1 2 L 1 3 R
2 3
3
5 2 L 2 3 L 2 4 R
3 4
Output 
1
2

Explanation:
Testcase1: The tree is
        1
     /      \
   2        3
The LCA of 2 and 3 is 1.
*/
// This function returns pointer to LCA of two given values n1 and n2. 
// This function assumes that n1 and n2 are present in Binary Tree 
struct Node *findLCA(struct Node* root, int n1, int n2) 
{ 
    if (root == NULL) return NULL; 
  
    if (root->key == n1 || root->key == n2) 
        return root; 
  
    Node *left_lca  = findLCA(root->left, n1, n2); 
    Node *right_lca = findLCA(root->right, n1, n2); 
  
    if (left_lca && right_lca)  return root; 
  
    return (left_lca != NULL)? left_lca: right_lca; 
} 
