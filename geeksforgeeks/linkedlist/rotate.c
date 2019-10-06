//ROTATE
/*
Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

Input Format:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains linked list elements and last line contains k, by which linked list is to be rotated.

Output Format:
For each testcase, print the rotated linked list.

User Task:
The task is to complete the function rotate() which takes head reference as the first argument and k as the second argument. The printing is done automatically by the driver code.

Constratints:
1 <= T <= 100
1 <= N <= 103
1 <= k <= 103

Example:
Input:
3
8
1 2 3 4 5 6 7 8
4
5
2 4 7 8 9
3
2
1 2
4

Output:
5 6 7 8 1 2 3 4
8 9 2 4 7
1 2
*/
  
void rotate(struct Node **head_ref, int k) 
{ 
     if (k == 0) 
       return; 
 
    struct Node* current = *head_ref; 
  
    int count = 1; 
    while (count < k && current != NULL) 
    { 
        current = current->next; 
        count++; 
    } 
 
    if (current == NULL) 
        return; 
  
    struct Node *kthNode = current; 
    while (current->next != NULL) 
        current = current->next; 
  
    current->next = *head_ref; 
  
    *head_ref = kthNode->next; 
  
    kthNode->next = NULL; 
} 