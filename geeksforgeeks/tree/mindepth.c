//MINIMUM DEPTH
int minDepth(Node *root) 
{ 
    if (root == NULL) 
        return 0; 
	
    if (root->left == NULL && root->right == NULL) 
    return 1; 
  
    // If left subtree is NULL, recur for right subtree 
    if (!root->left) 
    return minDepth(root->right) + 1; 
  
    // If right subtree is NULL, recur for left subtree 
    if (!root->right) 
    return minDepth(root->left) + 1; 
  
    return min(minDepth(root->left), minDepth(root->right)) + 1; 
} 