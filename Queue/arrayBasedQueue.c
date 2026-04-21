#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int isFull() {
    return (front == (rear + 1) % MAX);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;

    printf("Inserted Element: %d\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted Element: %d\n", queue[front]);

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void show() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");
    int i = front;
    while (1) {
        printf("%d\n", queue[i]);
        if (i == rear) {
            break;
        }
        i = (i + 1) % MAX;
    }
}

int main() {
    int choice, data;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Show\n4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                if (scanf("%d", &data) != 1) {
                    printf("Invalid input\n");
                    return 0;
                }
                enqueue(data);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                show();
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}