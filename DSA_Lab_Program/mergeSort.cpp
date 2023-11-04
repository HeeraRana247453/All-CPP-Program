//Merge Sort
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int *left_half = (int *)malloc(n1 * sizeof(int));
    int *right_half = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        left_half[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        right_half[j] = arr[middle + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (left_half[i] <= right_half[j]) {
            arr[k] = left_half[i];
            i++;
        } else {
            arr[k] = right_half[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left_half[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right_half[j];
        j++;
        k++;
    }

    free(left_half);
    free(right_half);
}

void merge_sort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int middle = left + (right - left) / 2;
    merge_sort(arr, left, middle);
    merge_sort(arr, middle + 1, right);
    merge(arr, left, middle, right);
}

// Example usage:
int main() {
    int unsorted_list[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(unsorted_list) / sizeof(unsorted_list[0]);

    merge_sort(unsorted_list, 0, n - 1);

    printf("Sorted List: ");
    for (int i = 0; i < n; i++)
        printf("%d ", unsorted_list[i]);

    return 0;
}
