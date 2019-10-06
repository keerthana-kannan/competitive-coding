//SUM OF LEAF NODE
void leafSum(Node *root, int *sum){ 
    if (!root) 
        return; 
  
    if (!root->left && !root->right) 
        *sum += root->data; 
  
    leafSum(root->left, sum); 
    leafSum(root->right, sum); 
} 