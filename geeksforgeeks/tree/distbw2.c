//DISTANCE BETWEEN 2 NODES IN BINARY TREE
/*
The distance between two nodes can be obtained in terms of lowest common ancestor. Following is the formula.

Dist(n1, n2) = Dist(root, n1) + Dist(root, n2) - 2*Dist(root, lca) 
'n1' and 'n2' are the two given keys
'root' is root of given Binary Tree.
'lca' is lowest common ancestor of n1 and n2
Dist(n1, n2) is the distance between n1 and n2.
*/
Node* LCA(Node * root, int n1,int n2) 
{ 
    if (root == NULL) 
       return root; 
    if (root->key == n1 || root->key == n2) 
       return root; 
  
    Node* left = LCA(root->left, n1, n2); 
    Node* right = LCA(root->right, n1, n2); 
  
    if (left != NULL && right != NULL) 
         return root; 
    if (left != NULL) 
        return LCA(root->left, n1, n2); 
  
    return LCA(root->right, n1, n2); 
} 
  
int findLevel(Node *root, int k, int level) 
{ 
    if(root == NULL) return -1; 
    if(root->key == k) return level; 
  
    int left = findLevel(root->left, k, level+1); 
    if (left == -1) 
       return findLevel(root->right, k, level+1); 
    return left; 
} 
  
int findDistance(Node* root, int a, int b) 
{ 
    Node* lca = LCA(root, a , b); 
  
    int d1 = findLevel(lca, a, 0); 
    int d2 = findLevel(lca, b, 0); 
  
    return d1 + d2; 
}  
  
int countLNodes(struct LNode *head) 
{ 
    int count = 0; 
    struct LNode *temp = head; 
    while(temp) 
    { 
        temp = temp->next; 
        count++; 
    } 
    return count; 
} 