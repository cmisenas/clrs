function quicksort(arr, lo, hi) {
  var p;
  if (lo < hi) {
    p = partition(arr, lo, hi);
    quicksort(arr, lo, p);
    quicksort(arr, p + 1, hi);
  }
}

function partition(arr, lo, hi) {
  var pivot = arr[lo];
  var i = lo - 1;
  var j = hi + 1;
  var temp;
  while (true) {
    do {
      j--;
    } while (arr[j] > pivot)
    do {
      i++;
    } while (arr[i] < pivot)
    if (i < j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    } else {
      return j;
    }
  }
}

var arr = [5, 2, 4, 6, 1, 3];
console.log(arr);
quicksort(arr, 0, arr.length - 1);
console.log(arr);
