//REMOVE LOOP

if (slow_p == fast_p) { 
			removeLoop(slow_p, list); 
            return 1; 
        } 
    } 
  
    Return 0 to indeciate that ther is no loop
    return 0; 
} 
void removeLoop(struct Node* loop_node, struct Node* head) 
{ 
    struct Node* ptr1; 
    struct Node* ptr2; 
  
    ptr1 = head; 
    while (1) { 
        ptr2 = loop_node; 
        while (ptr2->next != loop_node && ptr2->next != ptr1) 
            ptr2 = ptr2->next; 
  
        if (ptr2->next == ptr1) 
            break; 
  
        ptr1 = ptr1->next; 
    } 
  
    ptr2->next = NULL; 
} 