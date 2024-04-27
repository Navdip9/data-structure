#include <stdio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int item) {
    if ((rear + 1) % MAX_SIZE == front) {
        printf("Queue is full. Cannot enqueue element.\n");
    } else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = item;
        printf("Enqueued %d\n", item);
    }
}

int dequeue() {
    int item;
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    } else {
        item = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        return item;
    }
}

void display() {
    int i;
    if (front == -1)
        printf("Queue is empty.\n");
    else {
        printf("Queue elements: ");
        for (i = front; i != rear; i = (i + 1) % MAX_SIZE)
            printf("%d ", queue[i]);
        printf("%d\n", queue[i]);
    }
}

int main() {
    int choice, item;
    while (1) {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                item = dequeue();
                if (item != -1)
                    printf("Dequeued element: %d\n", item);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
}
