#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1 && rear == -1);
}

// Function to check if the queue is full
int isFull() {
    return (rear == MAX_SIZE - 1);
}

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    } else if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = value;
}

// Function to remove an element from the queue
int dequeue() {
    int deletedElement;
    if (isEmpty()) {
        printf("Queue is empty\n");
        exit(1);
    } else if (front == rear) {
        deletedElement = queue[front];
        front = rear = -1;
    } else {
        deletedElement = queue[front];
        front++;
    }
    return deletedElement;
}

// Function to display the elements of the queue
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    // Adding elements to the queue
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // Displaying the queue before deleting an element
    printf("Before deletion: ");
    displayQueue();

    // Deleting an element from the queue
    int deletedElement = dequeue();
    printf("Deleted element: %d\n", deletedElement);

    // Displaying the queue after deleting an element
    printf("After deletion: ");
    displayQueue();

    return 0;
}
