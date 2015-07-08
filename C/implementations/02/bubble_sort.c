#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printArr ( int arr[], int size ) {
    printf("[ ");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d ]\n", arr[size - 1]);
}

void bubble_sort ( int arr[], int size ) {
    for (int i = 0; i <= size - 2; i++) {
        for (int j = size - 1; j >= i + 1; j--) {
            if (arr[j] < arr[j - 1]) {
                arr[j] ^= arr[j - 1];
                arr[j - 1] ^= arr[j];
                arr[j] ^= arr[j - 1];
                printf("Intermediary array: ");
                printArr (arr, size);
            }
        }
    }
}

int main () {
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    int max = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArr(arr, max);

    bubble_sort(arr, max);

    printf("Sorted array: ");
    printArr(arr, max);

    return 0;
}

