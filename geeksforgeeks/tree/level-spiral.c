//LEVEL ORDER TRAVERSAL IN SPIRAL FORM
void printSpiral(struct node* root) 
{ 
    int h = height(root); 
    int i; 
  
    bool ltr = false; 
    for (i = 1; i <= h; i++) { 
        printGivenLevel(root, i, ltr); 
  
        ltr = !ltr; 
    } 
} 
  
void printGivenLevel(struct node* root, int level, int ltr) 
{ 
    if (root == NULL) 
        return; 
    if (level == 1) 
        printf("%d ", root->data); 
    else if (level > 1) { 
        if (ltr) { 
            printGivenLevel(root->left, level - 1, ltr); 
            printGivenLevel(root->right, level - 1, ltr); 
        } 
        else { 
            printGivenLevel(root->right, level - 1, ltr); 
            printGivenLevel(root->left, level - 1, ltr); 
        } 
    } 
} 