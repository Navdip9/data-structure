#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(int element) {
    if (isFull()) {
        printf("Stack overflow! Cannot insert element.\n");
        return;
    }
    stack[++top] = element;
    printf("Element %d inserted into the stack.\n", element);
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack underflow! No element to delete.\n");
        return -1; // Return -1 indicating error
    }
    return stack[top--];
}

// Function to display elements of the stack
void display() {
    if (isEmpty()) {
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

    // Display elements of the stack
    printf("Stack before deletion:\n ");
    display();

    // Delete an element from the stack and display it
    int deletedElement = pop();
    if (deletedElement != -1) {
        printf("Deleted element: %d\n", deletedElement);
    }

    // Display elements of the stack after deletion
    printf("Stack after deletion:\n ");
    display();

    return 0;
}
