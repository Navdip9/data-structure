#include <stdio.h>
#define SIZE 5

int front = -1, rear = -1;
int queue[SIZE];

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to insert an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot insert element.\n");
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = value;
    printf("Element %d \n", value);
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty. No elements to display.\n");
        return;
    }
    printf("Elements in the queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    // Insert elements into the queue
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    // Display elements of the queue
    display();

    return 0;
}
