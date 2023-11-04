#include <stdio.h>

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array into two segments and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choose the leftmost element as the pivot
    int i = low;

    for (int j = low + 1; j <= high; j++) {
            // If the current element is smaller or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of the smaller element
            swap(&arr[i], &arr[j]); // Swap arr[i] and arr[j]
        }
    }

    swap(&arr[low], &arr[i]); // Swap arr[low] and arr[i] (pivot)
    return i; // Return the index of the pivot
}

// Function to perform quicksort on the array
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find pivot element such that element smaller than pivot are on the left,
        // and elements greater than pivot are on the right
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
