//ADD TWO LINKED LIST
/*
Input: List1: 5->6->3  // represents number 365
       List2: 8->4->2 //  represents number 248
Output: Resultant list: 3->1->6  // represents number 613


Input: List1: 7->5->9->4->6  // represents number 64957
       List2: 8->4 //  represents number 48
Output: Resultant list: 5->0->0->5->6  // represents number 65005
*/

struct Node* addTwoLists (struct Node* first, struct Node* second) 
{ 
    struct Node* res = NULL; 
    struct Node *temp, *prev = NULL; 
    int carry = 0, sum; 
  
    while (first != NULL || second != NULL) 
    { 
        sum = carry + (first? first->data: 0) + (second? second->data: 0); 
  
        carry = (sum >= 10)? 1 : 0; 
  
        sum = sum % 10; 
  
        temp = newNode(sum); 
  
        if(res == NULL) 
            res = temp; 
        else  
            prev->next = temp; 
  
        prev  = temp; 
  
        if (first) first = first->next; 
        if (second) second = second->next; 
    } 
  
    if (carry > 0) 
      temp->next = newNode(carry); 
  
    return res; 
} 