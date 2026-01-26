#include <stdio.h>

int STACK[5];
int maxSize = 5;
int top = -1;

void push(int data){
    if(top == maxSize - 1){
        printf("\nStack Overflow\n");
    } else {
        STACK[++top] = data;
        printf("Inserted Element: %d\n", data);
    }
}

// void pop(){
//     if(top == -1){
//         printf("\nStack Underflow\n");
//     } else {

//         printf("Enter index to pop (0 to %d): ", top);
//         int index;
//         scanf("%d", &index);  // assume user always enters correct index
//         if(index < 0 || index > top){
//             printf("Invalid index\n");
//             return;
//         }
//         // Shift elements to remove the element at the specified index
//         for(int i = index; i < top; i++){
//             STACK[i] = STACK[i + 1];
//         }

//         printf("Deleted Element: %d\n", STACK[top--]);
//     }
// }

void pop(){
    if(top == -1){
        printf("\nStack Underflow\n");
    } else {
        printf("Deleted Element: %d\n", STACK[top--]);
    }
}

void show(){
    if(top == -1){
        printf("\nStack is empty\n");
    } else {
        printf("\nStack elements:\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n", STACK[i]);
        }
    }
}

int main(){
    while(1){
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");

        int c;
        scanf("%d", &c);  // assume user always enters correct number

        if(c == 1){  // push
            int data;
            printf("Enter data to push: ");
            scanf("%d", &data);  // directly read, no validation
            push(data);
        }
        else if(c == 2){  // pop
            pop();
        }
        else if(c == 3){  // display
            show();
        }
        else if(c == 4){  // exit
            printf("Program Exit Successfully.\n");
            break;  // loop end, program terminate
        }
        else{
            printf("Invalid choice\n");
        }
    }
    return 0;
}
