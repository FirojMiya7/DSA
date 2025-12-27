#include <stdio.h>

void merge(int arr[], int left, int right) {
    int l = left, i, j;
    int temp[100], pos = left, end = (left + right) / 2;
    int mid = end + 1;

    if (left < right) {

        // Divide
        merge(arr, left, end);
        merge(arr, end + 1, right);

        // Merge
        while (left <= end && mid <= right) {
            if (arr[left] < arr[mid]) {
                temp[pos++] = arr[left++];
            } else {
                temp[pos++] = arr[mid++];
            }
        }

        while (left <= end) {
            temp[pos++] = arr[left++];
        }

        while (right >= mid) {
            temp[pos++] = arr[right++];
        }

        // Copy back
        for (i = l; i <= right; i++) {
            arr[i] = temp[i];
        }
    }
}

int main() {
    int arr[] = {7, 2, 100, 9, 1, 25, 21};
    int left = 0;
    int right = 6;

    printf("Before Merge Sort:\n");
    for (int i = 0; i <= right; i++)
        printf("%d ", arr[i]);

    merge(arr, left, right);

    printf("\n\nAfter Merge Sort:\n");
    for (int i = 0; i <= right; i++)
        printf("%d ", arr[i]);

    return 0;
}
