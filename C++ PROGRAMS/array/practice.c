#include <stdio.h>
#include <stdlib.h>

// Define the structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

// Function to push an element onto the stack
void push(struct Node** top, int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = x;
    newNode->next = *top;
    *top = newNode;
}

// Function to pop an element from the stack
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack is empty!\n");
        return -1;
    }
    struct Node* temp = *top;
    int x = temp->data;
    *top = (*top)->next;
    free(temp);
    return x;
}

// Function to copy stack1 to stack2
void copyStack(struct Node** stack1, struct Node** stack2) {
    struct Node* tempStack = NULL;
    int temp;

    // Transfer elements from stack1 to tempStack
    while (*stack1 != NULL) {
        temp = pop(stack1);
        push(&tempStack, temp);
    }

    // Transfer elements from tempStack to stack1 and stack2
    while (tempStack != NULL) {
        temp = pop(&tempStack);
        push(stack1, temp);
        push(stack2, temp);
    }
}

// Function to display the elements of the stack
void displayStack(struct Node* top) {
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* stack1 = NULL;
    struct Node* stack2 = NULL;

    // Push elements onto stack1
    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);
    printf("Original stack1: \n");
    displayStack(stack1);

    // Copy stack1 to stack2
    copyStack(&stack1, &stack2);
    printf("After copying, stack1: \n");
    displayStack(stack1);
    printf("After copying, stack2: \n");
    displayStack(stack2);

    return 0;
}
