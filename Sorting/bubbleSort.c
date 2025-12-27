#include <stdio.h>

void bubble(int arr[], int left, int right) {
    int i, j, temp;

    for (i = left; i < right; i++) {
        for (j = left; j < right - (i - left); j++) {
            if (arr[j] > arr[j + 1]) {
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

    printf("Before Bubble Sort:\n");
    for (int i = left; i <= right; i++)
        printf("%d ", arr[i]);

    bubble(arr, left, right);

    printf("\nAfter Bubble Sort:\n");
    for (int i = left; i <= right; i++)
        printf("%d ", arr[i]);

    return 0;
}
