//CHECK FOR BALANCED TREE
int max(int a,int b)
{
    return (a>=b ? a:b);
}

int height(Node *root)
{
    if (root == NULL)
        return 0;
    
    return (1+ max(height(root->left),height(root->right)));
}

bool isBalanced(Node *root)
{
    if(root == NULL)
        return true;
    else
    {
        int l = height(root->left);
        int r = height(root->right);
        
        if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        else
            return false;
    }
}