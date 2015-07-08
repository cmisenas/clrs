function bubble_sort(arr) {
  for (var i = 0; i <= arr.length - 2; i++) {
    for (var j = arr.length - 1; j >= i + 1; j--) {
      if (arr[j] < arr[j - 1]) {
        arr[j]     ^= arr[j - 1];
        arr[j - 1] ^= arr[j];
        arr[j]     ^= arr[j - 1];
        console.log("Intermediary array ", arr);
      }
    }
  }
}

var arr1 = [5, 2, 4, 6, 1, 3];
console.log("Original array ", arr1);
bubble_sort(arr1);
console.log("Sorted array ", arr1);

