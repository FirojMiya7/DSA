#include <stdio.h>

void heapSort(int arr[], int left, int right) {
    int n = right - left + 1;  // Total number of elements
    int i, j, temp;

    // 1️⃣ Build max heap
    for (i = n / 2 - 1; i >= 0; i--) {
        j = i;
        while (1) {
            int largest = j;       // Assume root is largest
            int l = 2 * j + 1;     // Left child index
            int r = 2 * j + 2;     // Right child index

            // Check if left child exists and is greater than current largest
            if (l < n && arr[l] > arr[largest])
                largest = l;

            // Check if right child exists and is greater than current largest
            if (r < n && arr[r] > arr[largest])
                largest = r;

            // If largest is not root, swap and continue
            if (largest != j) {
                temp = arr[j];
                arr[j] = arr[largest];
                arr[largest] = temp;
                j = largest; // Move down to continue heapify
            } else {
                break; // Heap property satisfied
            }
        }
    }

    // 2️⃣ Extract elements from heap one by one
    for (i = n - 1; i > 0; i--) {
        // Move current root (largest) to end
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify the reduced heap
        j = 0;
        while (1) {
            int largest = j;
            int l = 2 * j + 1;
            int r = 2 * j + 2;

            if (l < i && arr[l] > arr[largest])
                largest = l;
            if (r < i && arr[r] > arr[largest])
                largest = r;

            if (largest != j) {
                temp = arr[j];
                arr[j] = arr[largest];
                arr[largest] = temp;
                j = largest;
            } else {
                break;
            }
        }
    }
}

int main() {
    int arr[] = {7, 2, 100, 9, 1, 25, 21};
    int left = 0;
    int right = 6;
    int i;

    printf("Before Heap Sort:\n");
    for (i = left; i <= right; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Call heap sort
    heapSort(arr, left, right);

    printf("After Heap Sort:\n");
    for (i = left; i <= right; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

