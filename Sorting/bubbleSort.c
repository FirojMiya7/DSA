#include <stdio.h>

// Bubble sort function using left and right attributes
void bubble(int arr[], int left, int right) {
    int i, j, temp;

    // Outer loop for number of passes
    for (i = left; i < right; i++) {

        // Inner loop for comparing adjacent elements
        // Each pass moves the largest unsorted element to its correct position
        for (j = left; j < right - (i - left); j++) {
            if (arr[j] > arr[j + 1]) {   // If elements are out of order, swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {7, 2, 100, 9, 1, 25, 21};
    int left = 0;
    int right = 6;

    // Print array before sorting
    printf("Before Bubble Sort:\n");
    for (int i = left; i <= right; i++)
        printf("%d ", arr[i]);
    
    printf("\n");

    // Call bubble sort
    bubble(arr, left, right);

    // Print array after sorting
    printf("After Bubble Sort:\n");
    for (int i = left; i <= right; i++)
        printf("%d ", arr[i]);

    return 0;
}
