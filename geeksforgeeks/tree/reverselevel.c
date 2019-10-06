//REVERSE LEVEL ORDER TRAVERSAL
int height(Node* root)
{
    if (root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 1;
        
    return 1+max(height(root->left),height(root->right));
}

void given_level(Node* root, int level)
{
    int h = height(root);
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ",root->data);
    if(level >1)
    {
        given_level(root->left,level-1);
        given_level(root->right,level-1);
    }
}

void reversePrint(Node *root)
{
    int h = height(root);
    
    for(int i=h;i>=1;i--)
        given_level(root,i);
}