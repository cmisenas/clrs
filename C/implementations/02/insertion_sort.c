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

int main() {
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    int max = sizeof(arr) / sizeof(arr[0]);
    int key, i;

    printf("Unsorted array: ");
    printArr(arr, max);

    for (int j = 1; j < max; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }

    printf("Sorted array: ");
    printArr(arr, max);

    return 0;
}

