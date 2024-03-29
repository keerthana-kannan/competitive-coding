//DIAMETER OF BINARY TREE
/*
Given a Binary Tree, find diameter of it.
+The diameter of a tree is the number of nodes on the longest path between two leaves in the tree. The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains number of edges. The second line contains the relation between nodes.

Output Format:
For each testcase, in a new line, print the diameter.

Your Task:
You need to complete the function diameter() that takes node as parameter and returns the diameter.

Constraints:
1 <= T <= 30
1 <= Number of nodes <= 100
1 <= Data of a node <= 1000

Example:
Input:
2
2
1 2 L 1 3 R
4
10 20 L 10 30 R 20 40 L 20 60 R
Output:
3
4

Explanation:
Testcase1: The tree is
        1
     /      \
   2        3
The diameter is of 3 length.
Testcase2: The tree is
                           10
                        /        \
                     20         30
                  /       \
               40       60
The diameter is of 4 length.
*/
int max(int a,int b)
{
    return (a>=b ? a:b);
}

int height(Node *node)
{
    if(node == NULL)
        return 0;

    return (1+ max(height(node->left),height(node->right)));
}

int diameter(Node* node)
{
    if(node == NULL)
        return 0;
        
    int lh = height(node->left);
    int rh = height(node->right);
        
    int ld = diameter(node->left);
    int rd = diameter(node->right);
        
    return (max(lh+rh+1, max(ld,rd)));
   // Your code here
}