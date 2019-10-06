//delete by key
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          // Data
    struct node *next; // Address
} * head;

void createList(int n);
void deleteFirstByKey(int key);
void displayList();


int main()
{
    int n, key;

    // Input node count to create
    printf("Enter number of node to create: ");
    scanf("%d", &n);

    createList(n);

    // Display list
    printf("\nData in list before deletion\n");
    displayList();

    printf("\nEnter element to delete with key: ");
    scanf("%d", &key);

    deleteFirstByKey(key);

    // Print final list
    printf("\nData in list after deletion\n");
    displayList();

    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("Unable to allocate memory. Exiting from app.");
        exit(0);
    }
    
    printf("Enter data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL

    temp = head;

    for (i = 2; i <= n; i++)
    {
        newNode = malloc(sizeof(struct node));

        if (newNode == NULL)
        {
            printf("Unable to allocate memory. Exiting from app.");
            exit(0);
        }

        printf("Enter data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // The newNode should point to nothing

        temp->next = newNode; // Link previous node i.e. temp to the newNode
        temp = temp->next;
    }
    
}

void displayList()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);
        
        temp = temp->next;  // Move to next node
    }

    printf("\n");
}

void deleteFirstByKey(int key)
{
    struct node *prev, *cur;

    /* Check if head node contains key */
    while (head != NULL && head->data == key)
    {
        // Get reference of head node
        prev = head;

        // Adjust head node link
        head = head->next;

        // Delete prev since it contains reference to head node
        free(prev);

        // No need to delete further
        return;
    }

    prev = NULL;
    cur  = head;

    /* For each node in the list */
    while (cur != NULL)
    {
        // Current node contains key
        if (cur->data == key)
        {
            // Adjust links for previous node
            if (prev != NULL) 
                prev->next = cur->next;

            // Delete current node
            free(cur);

            // No need to delete further
            return;
        } 

        prev = cur;
        cur = cur->next;
    }
}