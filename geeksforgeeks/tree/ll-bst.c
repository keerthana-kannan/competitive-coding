//sorted LL TO BALANCED BST
/*
Method 1 constructs the tree from root to leaves. In this method, we construct from leaves to root. The idea is to insert nodes in BST in the same order as 
they appear in Linked List so that the tree can be constructed in O(n) time complexity. We first count the number of nodes in the given Linked List. Let the 
count be n. After counting nodes, we take left n/2 nodes and recursively construct the left subtree. After left subtree is constructed, we allocate memory 
for root and link the left subtree with root. Finally, we recursively construct the right subtree and link it with root.
While constructing the BST, we also keep moving the list head pointer to next so that we have the appropriate pointer in each recursive call.
*/
struct TNode* sortedListToBST(struct LNode *head) 
{ 
    int n = countLNodes(head);
    return sortedListToBSTRecur(&head, n); 
} 
  
struct TNode* sortedListToBSTRecur(struct LNode **head_ref, int n) 
{ 
    if (n <= 0) 
        return NULL; 
    struct TNode *left = sortedListToBSTRecur(head_ref, n/2); 
  
    struct TNode *root = newNode((*head_ref)->data); 
    root->left = left; 
  
    *head_ref = (*head_ref)->next; 
    root->right = sortedListToBSTRecur(head_ref, n-n/2-1); 
  
    return root; 
} 