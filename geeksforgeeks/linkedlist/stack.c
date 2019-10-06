//STACK USING LL
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>     // For INT_MIN

#define CAPACITY 10000  // Stack maximum capacity

struct stack 
{
    int data;
    struct stack *next;
} *top;

// Stack size
int size = 0;

void push(int element);
int  pop();


int main()
{
    int choice, data;

    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch(choice) 
        {
            case 1: 
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                
                // Push element to stack
                push(data);
                break;

            case 2: 
                data = pop();

                // If stack is not empty
                if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;

            case 3: 
                printf("Stack size: %d\n", size);
                break;

            case 4: 
                printf("Exiting from app.\n");
                exit(0);
                break;

            default: 
                printf("Invalid choice, please try again.\n");
        }

        printf("\n\n");
    }


    return 0;
}

void push(int element)
{
    // Check stack overflow
    if (size >= CAPACITY)
    {
        printf("Stack Overflow, can't add more element to stack.\n");
        return;
    }

    // Create a new node and push to stack
    struct stack * newNode = (struct stack *) malloc(sizeof(struct stack));

    // Assign data to new node in stack
    newNode->data = element;

    // Next element after new node should be current top element
    newNode->next = top;        

    // Make sure new node is always at top
    top = newNode;

    // Increase element count in stack
    size++;

    printf("Data pushed to stack.\n");
}

int pop()
{
    int data = 0;
    struct stack * topNode;
    
    // Check stack underflow
    if (size <= 0 || !top)
    {
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    topNode = top;

    // Copy data from stack's top element
    data = top->data;

    // Move top to its next element
    top = top->next;

    // Delete the previous top most stack element from memory
    free(topNode);

    // Decrement stack size
    size--;

    return data;
}