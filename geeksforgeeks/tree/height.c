//HEIGHT OF BINARY TREE
int max(int a, int b)
{
return a>b?a:b;
}

int height(Node* node)
{
   if(node==NULL)
        return 0;
   else if(node->left==NULL && node->right==NULL)
        return 1;
   else
        return 1 +max(height(node->left),height(node->right));
}