#include <stdio.h>
#include <stdlib.h>
#define max 10

void push(int stk[], int *top, int item) {
    if (*top == max - 1) {
        printf("Stack is full\n");
    } else {
        (*top)++;  // Increment top first
        stk[*top] = item;  // Then assign item to the new top
    }
}

void pop(int stk[], int *top) {
    if (*top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The value to be popped is %d\n", stk[*top]);
        (*top)--;  // Decrement top after printing
    }
}

void peek(int stk[], int *top) {
    if (*top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The top element of the stack is %d\n", stk[*top]);
    }
}

void traverse(int stk[], int *top) {
    if (*top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The elements of the stack are: ");
        for (int i = *top; i >= 0; i--) {
            printf("%d ", stk[i]);
        }
        printf("\n");
    }
}

int main() {
    int stk[max], top = -1, item, choice;

    do {
        printf("\nEnter your choice:\n1. Push\n2. Pop\n3. Peek\n4. Traverse\n5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number to be pushed: ");
                scanf("%d", &item);
                push(stk, &top, item);
                break;
            case 2:
                pop(stk, &top);
                break;
            case 3:
                peek(stk, &top);
                break;
            case 4:
                traverse(stk, &top);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice, please try again\n");
        }
    } while (1);

    return 0;
}
