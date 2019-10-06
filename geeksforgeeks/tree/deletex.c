//DELETE LEAF NODE WITH VALUE 'X'
Node* deleteLeaves(Node* root, int x) 
{ 
    if (root == NULL) 
        return NULL; 
    root->left = deleteLeaves(root->left, x); 
    root->right = deleteLeaves(root->right, x); 
  
    if (root->data == x && root->left == NULL &&  
                          root->right == NULL) { 
        delete(root); 
        return NULL; 
    } 
    return root; 
} 