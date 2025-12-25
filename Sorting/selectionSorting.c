#include <stdio.h>

int main() {
    int arr[100], n, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Selection Sort logic
    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap if needed
        if (i != minIndex) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        // Print array after each pass
        printf("\nArray after pass %d: ", i + 1);
        for (j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
    }

    return 0;
}
