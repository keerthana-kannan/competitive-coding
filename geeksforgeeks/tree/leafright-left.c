//PRINT LEAF NODES RIGHT TO LEFT
void printLeafNodes(Node* root) 
{ 
    if (!root) 
        return; 
  
    if (!root->left && !root->right) { 
        cout << root->data << " "; 
        return; 
    } 
  
    if (root->right) 
        printLeafNodes(root->right); 
  
    if (root->left) 
        printLeafNodes(root->left); 
}