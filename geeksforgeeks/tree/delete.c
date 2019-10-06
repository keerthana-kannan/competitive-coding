//Delete TREE
void deleteTree(struct node* node)  
{ 
    if (node == NULL) return; 
  
    /* first delete both subtrees */
    deleteTree(node->left); 
    deleteTree(node->right); 
    
    /* then delete the node */
    printf("\n Deleting node: %d", node->data); 
    free(node); 
}  