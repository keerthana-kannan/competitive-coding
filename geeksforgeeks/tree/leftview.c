//left view 
/*
1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8
*/
void leftViewUtil(struct node* root, int level, int* max_level) 
{ 
    if (root == NULL) 
        return; 
  
    if (*max_level < level) { 
        printf("%d\t", root->data); 
        *max_level = level; 
    } 
  
    leftViewUtil(root->left, level + 1, max_level); 
    leftViewUtil(root->right, level + 1, max_level); 
} 
  
void leftView(struct node* root) 
{ 
    int max_level = 0; 
    leftViewUtil(root, 1, &max_level); 
} 