//PRINT LEAF NODES AT GIVEN LEVEL
void PrintLeafNodes(struct node* root, int level) 
{ 
    if (root == NULL) 
        return; 
  
    if (level == 1) { 
        if (root->left == NULL && root->right == NULL) 
            cout << root->data << " "; 
    } 
    else if (level > 1) { 
        PrintLeafNodes(root->left, level - 1); 
        PrintLeafNodes(root->right, level - 1); 
    } 
}