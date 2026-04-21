#include<stdio.h>
#include<stdlib.h>

// Node Structure
struct node {
    int data;
    struct node* next;
};

// Front and Rear pointers
struct node* front = NULL;
struct node* rear = NULL;

// Function to enqueue an element into the queue
void enqueue(int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;   
    }
    printf("Inserted Element: %d\n", data);
}

// Function to dequeue an element from the queue
void dequeue() {
    if (front == NULL) {
        printf("\nQueue Underflow\n");
    } else {
        struct node* temp = front;
        printf("Deleted Element: %d\n", temp->data);
        front = front->next;
        free(temp);
        if (front == NULL) {
            rear = NULL;
        }
    }
}

// Function to display the queue elements
void show() {
    if (front == NULL) {
        printf("\nQueue is empty\n");
    } else {
        printf("\nQueue elements:\n");
        struct node* temp = front;
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int choice, data;
    
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Show\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
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
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}