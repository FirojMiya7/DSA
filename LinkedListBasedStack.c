#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

// Function to push an element onto the stack

void push(int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
    printf("Inserted Element: %d\n", data);
}

// Function to pop an element from the stack

void pop() {
    if (top == NULL) {
        printf("\nStack Underflow\n");
    } else {
        struct node* temp = top;
        printf("Deleted Element: %d\n", temp->data);
        top = top->next;
        free(temp);
    }
}

// Function to display the stack elements

void show() {
    if (top == NULL) {
        printf("\nStack is empty\n");
    } else {
        printf("\nStack elements:\n");
        struct node* temp = top;
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int choice, data;
    
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Show\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}