//MAXIMUM PATH SUM
/*
Given a binary tree in which each node element contains a number. Find the maximum possible sum from one leaf node to another.

Input Format:
The input contains T, denoting number of testcases. For each testcase there will be two lines. The first line contains number of edges. The second line contains two nodes and a character separated by space. The first node denotes data value, second node denotes where it will be assigned to the previous node which will depend on character 'L' or 'R' i.e. the 2nd node will be assigned as left child to the 1st node if character is 'L' and so on. The first node of second line is root node. The struct or class Node has a data part which stores the data, pointer to left child and pointer to right child. There are multiple test cases. For each test case, the function will be called individually.

Output Format:
For each testcase, in a new line, print he maximum possible sum.

Your Task:
This is a function problem. You only need to complete the function maxPathSum that returns the maximum sum from one lead to other.

Constraints:
1 <=T <= 100
1 <= N <= 30

Example:
Input:
1
12
-15 5 L -15 6 R 5 -8 L 5 1 R -8 2 L -8 -3 R 6 3 L 6 9 R 9 0 R 0 4 L 0 -1 R -1 10 L

Output:
27

Explanation:
Testcase 1: The maximum possible sum from one leaf node to another is (3 + 6 + 9 + 0 + -1 + 10 = 27)
*/
int max(int a, int b) 
{ return (a >= b)? a: b; } 
  
int maxPathSumUtil(struct Node *root, int &res) 
{ 
    if (root==NULL) return 0; 
    if (!root->left && !root->right) return root->data; 
  
    int ls = maxPathSumUtil(root->left, res); 
    int rs = maxPathSumUtil(root->right, res); 
  
    if (root->left && root->right) 
    { 
        res = max(res, ls + rs + root->data); 
  
        return max(ls, rs) + root->data; 
    } 
  
    return (!root->left)? rs + root->data: 
                          ls + root->data; 
} 
  
int maxPathSum(struct Node *root) 
{ 
    int res = INT_MIN; 
    maxPathSumUtil(root, res); 
    return res; 
} 