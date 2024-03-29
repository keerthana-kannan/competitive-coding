//DELETE A GIVEN NODE
/* Given a non-empty binary search tree, return the node with minimum 
   key value found in that tree. Note that the entire tree does not 
   need to be searched. */
struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
  
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
  
struct node* deleteNode(struct node* root, int key) 
{ 
    if (root == NULL) return root; 
  
    if (key < root->key) 
        root->left = deleteNode(root->left, key); 
  
    else if (key > root->key) 
        root->right = deleteNode(root->right, key); 
  
    else
    { 
        if (root->left == NULL) 
        { 
            struct node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left; 
            free(root); 
            return temp; 
        } 
  
        struct node* temp = minValueNode(root->right); 
   
        root->key = temp->key; 
  
        root->right = deleteNode(root->right, temp->key); 
    } 
    return root; 
}