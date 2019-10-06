//FLATTENING A LINKED LIST
Node* merge( Node* a, Node* b ) 
{ 
    if (a == NULL) 
        return b; 
  
    if (b == NULL) 
        return a; 
    Node* result; 
    if (a->data < b->data) 
    { 
        result = a; 
        result->down = merge( a->down, b ); 
    } 
    else
    { 
        result = b; 
        result->down = merge( a, b->down ); 
    } 
  
    return result; 
} 
  
Node* flatten (Node* root) 
{ 
    if (root == NULL || root->right == NULL) 
        return root; 
  
    return merge( root, flatten(root->right) ); 
} 