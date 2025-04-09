#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Loop through the array
        for (int j = 0; j < n - i - 1; j++) { // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they're out of order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element
    }
    printf("\n"); // New line for readability
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    printf("Original array:\n");
    printArray(arr, n); // Print the original array

    bubbleSort(arr, n); // Call the bubble sort function

    printf("Sorted array:\n");
    printArray(arr, n); // Print the sorted array

    return 0; // Exit successfully
}
