#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack overflow!\n");
        return;
    }
    stack[++top] = value;
    printf("Element %d \n", value);
}

// Function to display elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty. No elements to display.\n");
        return;
    }
    printf("Elements in the stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    // Insert elements into the stack
    push(10);
    push(20);
    push(30);
    push(40);

    // Display elements of the stack
    display();

    return 0;
}
