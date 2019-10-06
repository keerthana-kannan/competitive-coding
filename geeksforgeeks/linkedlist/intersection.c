//INTERSECTION POINT IN Y SHAPED LINKED LIST
/*
There are two singly linked lists of size N and M in a system. But, due to some programming error the end node of one of the linked list got linked into one of the node of second list, forming a inverted Y shaped list. Write a program to get the point where two linked lists intersect each other.

Y ShapedLinked List
Above diagram shows an example with two linked list having 15 as intersection point. Expected time complexity is O(m + n) where m and n are lengths of two linked lists.

Input:
First line of input is the number of test cases T. Every test case has four lines. First line of every test case contains three numbers, x (number of nodes before merge point in 1st list), y (number of nodes before merge point in 11nd list) and z (number of nodes after merge point). Next three lines contain x, y and z values.

Output:
Print the data of the node in the linked list where two linked lists intersects.

Your Task:
The task is to complete the function intersetPoint() which finds the point of intersection of two linked list. The function should return data value of a node where two linked lists merge. If linked list do not merge at any point, then it shoudl return -1.

Constraints:
1 <= T <= 50
1 <= N <= 100
1 <= value <= 1000

Example:
Input:
2
2 3 2
10 20
30 40 50
5 10
2 3 2
10 20
30 40 50
10 20

Output:
5
10

HINT:
Method Using difference of node counts:

1) Get count of the nodes in the first list, let be c1.
2) Get count of the nodes in the second list, let be c2.
3) Get the difference of counts d = abs(c1 – c2)
4) Now traverse the bigger list from the first node till d nodes so that from here onwards both the lists have equal no of nodes.
5) Then we can traverse both the lists in parallel till we come across a common node.
*/

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1 =0;
    int c2 = 0;
    int diff =0;
    
    struct Node *curr1,*curr2;
    curr1 = head1;
    while(curr1 != NULL)
    {
        c1++;
		curr1 = curr1->next;
    }
    curr2 = head2;
    while(curr2 != NULL)
    {
        c2++;
        curr2 = curr2->next;
    }
    
    diff = abs(c1-c2);
    
    
    curr1 = head1;
    curr2 = head2;
    if(c1>c2)
   {
       while(diff--)
       {
          curr1=curr1->next; 
       }
   }
   else
   {
       while(diff--)
       {
         curr2=curr2->next;  
       }
   }
   while(curr1&&curr2&&curr1->next!=curr2->next)
   {
    curr1=curr1->next;
    curr2=curr2->next;
   }
   return curr1->next->data;
}