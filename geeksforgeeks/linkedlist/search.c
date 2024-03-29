//search element
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          // Data
    struct node *next; // Address
} * head;

void createList(int n);
void displayList();
int  search(int key);


int main()
{
    int n, keyToSearch, index;

    // Input node count to create
    printf("Enter number of node to create: ");
    scanf("%d", &n);

    createList(n);

    // Display list
    printf("\nData in list: \n");
    displayList();

    // Input element to search from user.
    printf("\nEnter element to search: ");
    scanf("%d", &keyToSearch);

    // Call function to search first element by key
    index = search(keyToSearch);
    
    // Element found in the list
    if (index >= 0)
        printf("%d found in the list at position %d\n", keyToSearch, index + 1);
    else
        printf("%d not found in the list.\n", keyToSearch);
    

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

int search(int key)
{
    int index;
    struct node *curNode;

    index = 0;
    curNode = head;

    // Iterate till last element until key is not found
    while (curNode != NULL && curNode->data != key)
    {
        index++;
        curNode = curNode->next;
    }


    return (curNode != NULL) ? index : -1;
}