//SORT LL OF 0,1,2
/* Given a linked list of N nodes where nodes can contain values 0s, 1s and 2s only. The task is to segregate 0s, 1s and 2s linked list such that all zeros segregate to headside, 2s at the end of the linked list and 1s in the mid of 0s and 2s.

Input Format:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains N elements as the data in the linked list.

Output Format:
For each testcase, segregate the 0s, 1s and 2s and display the linked list.

Your Task:
The task is to complete the function segregate() which segregate the nodes in the linked list as asked in the problem statement. The printing is done automatically by the driver code.

Constraints:
1 <= T <= 100
1 <= N <= 103

User Task:
The task is to complete the function sortList() which takes head reference as the argument and returns void.

Example:
Input:
2
8
1 2 2 1 2 0 2 2
4
2 2 0 1

Output:
0 1 1 2 2 2 2 2
0 1 2 2
*/
#include<stdio.h> 
#include<stdlib.h> 

struct Node 
{ 
    int data; 
    struct Node* next; 
}; 

void sortList(struct Node *head) 
{ 
    int count[3] = {0, 0, 0};  // Initialize count of '0', '1' and '2' as 0 
    struct Node *ptr = head; 
  
    while (ptr != NULL) 
    { 
        count[ptr->data] += 1; 
        ptr = ptr->next; 
    } 
  
    int i = 0; 
    ptr = head; 
  
    while (ptr != NULL) 
    { 
        if (count[i] == 0) 
            ++i; 
        else
        { 
            ptr->data = i; 
            --count[i]; 
            ptr = ptr->next; 
        } 
    } 
}