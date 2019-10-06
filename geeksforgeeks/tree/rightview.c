//RIGHT VIEW
/*
Test case 1:

           1

        /     \

      3        2

For the above test case the right view is: 1 2

Test case 2:

            10

         /        \

     20          30

   /      \      

40      60

Right View is: 10 30 60.
*/
void rightviewutil(Node *root,int level, int* max_level)
{
    if(root == NULL)
        return;
    if(*max_level<level)
    {
        printf("%d ",root->data);
        *max_level = level;
    }
    
    rightviewutil(root->right,level+1,max_level);
    rightviewutil(root->left,level+1,max_level);
}
void rightView(Node *root)
{
   int max_level = 0;
   rightviewutil(root,1,&max_level);
}