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

// including start element
// excluding end element
void printArrStEnd ( int arr[], int start, int end ) {
    printf("[ ");
    for (int i = start; i < end - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d ]\n", arr[end - 1]);
}

void merge (int arr[], int p, int q, int r) {
  int leftLen = q - p + 1;
  int rightLen = r - q;
  int leftArr[leftLen + 1];
  int rightArr[rightLen + 1];
  for (int i = 0; i < leftLen; i++) {
    leftArr[i] = arr[p + i];
  }
  for (int j = 0; j < rightLen; j++) {
    rightArr[j] = arr[q + j + 1];
  }
  leftArr[leftLen] = INFINITY;
  rightArr[rightLen] = INFINITY;

  printf("The array: ");
  printArrStEnd(arr, p, r + 1);
  printf("The left array: ");
  printArr(leftArr, leftLen);
  printf("The right array: ");
  printArr(rightArr, rightLen);

  int i = 0;
  int j = 0;
  for (int k = p; k <= r; k++) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
  }

  printf("The array after sorting: ");
  printArrStEnd(arr, p, r + 1);
}

void merge_sort (int arr[], int p, int r) {
  if (p < r) {
    int q = (p + r)/2;
    merge_sort(arr, p, q);
    merge_sort(arr, q + 1, r);
    merge(arr, p, q, r);
  }
}

int main() {
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    int max = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArr(arr, max);

    merge_sort(arr, 0, max - 1);

    printf("Sorted array: ");
    printArr(arr, max);

    return 0;
}

