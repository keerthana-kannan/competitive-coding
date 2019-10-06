//COUNT LEAVES 
int countLeaves(Node* root)
{
    if(root->left==NULL && root->right==NULL)
        return 1;
    else
    {   int l=0,r=0;
        l+=countLeaves(root->left);
        r+=countLeaves(root->right);
        return (l+r);
    }
}