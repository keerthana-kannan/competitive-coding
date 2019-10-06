//DETERMINE IF 2 TREES ARE IDENTICAL
int identicalTrees(struct node* a, struct node* b) 
{ 
    if (a==NULL && b==NULL) 
        return 1; 
  
    if (a!=NULL && b!=NULL) 
    { 
        return
        ( 
            a->data == b->data && 
            identicalTrees(a->left, b->left) && 
            identicalTrees(a->right, b->right) 
        ); 
    } 
      
    return 0; 
}  