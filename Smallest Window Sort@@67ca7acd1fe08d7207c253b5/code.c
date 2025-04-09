#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Identify the start of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    if (start == -1) {
        // The array is already sorted
        return 0;
    }

    // Identify the end of the unsorted subarray
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the minimum and maximum in the unsorted subarray
    int min = arr[start], max = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand the start index to include elements greater than min
    for (int i = 0; i < start; i++) {
        if (arr[i] > min) {
            start = i;
            break;
        }
    }

    // Expand the end index to include elements less than max
    for (int i = n - 1; i > end; i--) {
        if (arr[i] < max) {
            end = i;
            break;
        }
    }

    return (end - start + 1);
}

 int main() {
    int arr[] = {1, 2, 5, 3, 4, 7, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findUnsortedSubarray(arr, n);

    printf("Length of the smallest subarray to sort: %d\n", result);

    return 0;
}
