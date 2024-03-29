//CONNECT NODES AT SAME LEVEL
/*
Given a binary tree, connect the nodes that are at same level.
Structure of the given Binary Tree node is like following.

struct Node
{
      int data;
      Node* left;
      Node* right;
      Node* nextRight;
}
Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node.
       10                       10 ------> NULL
      / \                       /      \
     3   5       =>     3 ------> 5 --------> NULL
    / \     \               /  \           \
   4   1   2          4 --> 1 -----> 2 -------> NULL

Input Format:
The input contains T, denoting number of testcases. For each testcase there will be third lines. The first line contains number of edges. The second line contains relation between nodes. The second line contains two nodes and a character separated by space. The first node denotes data value, second node denotes where it will be assigned to the previous node which will depend on character 'L' or 'R' i.e. the 2nd node will be assigned as left child to the 1st node if character is 'L' and so on. The first node of second line is root node. The struct or class Node has a data part which stores the data, pointer to left child and pointer to right child. There are multiple test cases. For each test case, the function will be called individually.

Output Format:
For each testcase, in a new line, print the level order and inorder traversals.

Your Task:
You don't have to take input. Complete the function connect() that takes node as parameter and connects the nodes at same level. The printing is done by the driver code.

Constraints:
1 <= T <= 100
1 <= Number of nodes <= 100
1 <= Data of a node <= 1000

Example:
Input:
2
2
3 1 L 3 2 R
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
3 1 2
1 3 2
10 20 30 40 60
40 20 60 10 30

Explanation:
Testcase1: The connected tree is
        3 ------> NULL
     /      \
   1 -----> 2 ------ NULL
Testcase2: The connected tree is
                           10 ----------> NULL
                        /        \
                     20 ------> 30 -------> NULL
                  /       \
               40 ----> 60 ----------> NULL
*/
Node *getNextRight(Node *p) 
{ 
    Node *temp = p->nextRight; 
  
    while(temp != NULL) 
    { 
        if(temp->left != NULL) 
            return temp->left; 
        if(temp->right != NULL) 
            return temp->right; 
        temp = temp->nextRight; 
    } 
  
    return NULL; 
} 
void connectRecur(Node *p)
{
    if (!p) 
       return; 
  
    if (p->nextRight != NULL) 
       connectRecur(p->nextRight); 
    if (p->left) 
    { 
       if (p->right) 
       { 
           p->left->nextRight = p->right; 
           p->right->nextRight = getNextRight(p); 
       } 
       else
           p->left->nextRight = getNextRight(p); 
  
       connectRecur(p->left); 
    } 
  
    else if (p->right) 
    { 
        p->right->nextRight = getNextRight(p); 
        connectRecur(p->right); 
    } 
    else
       connectRecur(getNextRight(p));   
}
void connect(Node *p)
{
   p->nextRight = NULL;
   connectRecur(p);
}
//FOR COMPLETE TREES ONLY
/*
void connect(node *p)  
{  
    // Set the nextRight for root  
    p->nextRight = NULL;  
  
    // Set the next right for rest of the nodes  
    // (other than root)  
    connectRecur(p);  
}  
  
/* Set next right of all descendents of p.  
Assumption: p is a compete binary tree 
void connectRecur(node* p)  
{  
    // Base case  
    if (!p)  
        return;  
      
    if (p->left)  
        p->left->nextRight = p->right;  
      
    if (p->right)  
        p->right->nextRight = (p->nextRight)? p->nextRight->left: NULL;  
      
    connectRecur(p->left);  
    connectRecur(p->right);  
}  
*/