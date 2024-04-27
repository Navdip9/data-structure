#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int deque[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue_front(int item) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1))) {
        printf("Deque is full. Cannot enqueue from front.\n");
        return;
    } else if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX_SIZE - 1;
    } else {
        front = front - 1;
    }
    deque[front] = item;
    printf("Enqueued %d from front.\n", item);
}

void enqueue_rear(int item) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1))) {
        printf("Deque is full. Cannot enqueue from rear.\n");
        return;
    } else if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX_SIZE - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    deque[rear] = item;
    printf("Enqueued %d from rear.\n", item);
}

int dequeue_front() {
    if (front == -1) {
        printf("Deque is empty. Cannot dequeue from front.\n");
        return -1;
    }
    int item = deque[front];
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX_SIZE - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
    printf("Dequeued %d from front.\n", item);
    return item;
}

int dequeue_rear() {
    if (front == -1) {
        printf("Deque is empty. Cannot dequeue from rear.\n");
        return -1;
    }
    int item = deque[rear];
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX_SIZE - 1;
    } else {
        rear = rear - 1;
    }
    printf("Dequeued %d from rear.\n", item);
    return item;
}

void display() {
    if (front == -1) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    if (front <= rear) {
        while (i <= rear) {
            printf("%d ", deque[i]);
            i++;
        }
    } else {
        while (i < MAX_SIZE) {
            printf("%d ", deque[i]);
            i++;
        }
        i = 0;
        while (i <= rear) {
            printf("%d ", deque[i]);
            i++;
        }
    }
    printf("\n");
}

int main() {
    int choice, item;
    while (1) {
        printf("\n1. Enqueue from front\n");
        printf("2. Enqueue from rear\n");
        printf("3. Dequeue from front\n");
        printf("4. Dequeue from rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to enqueue from front: ");
                scanf("%d", &item);
                enqueue_front(item);
                break;
            case 2:
                printf("Enter the item to enqueue from rear: ");
                scanf("%d", &item);
                enqueue_rear(item);
                break;
            case 3:
                dequeue_front();
                break;
            case 4:
                dequeue_rear();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
