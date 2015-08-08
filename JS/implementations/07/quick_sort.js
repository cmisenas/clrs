function quicksort(arr, lo, hi) {
  var p;
  if (lo < hi) {
    p = partition(arr, lo, hi);
    quicksort(arr, lo, p - 1);
    quicksort(arr, p + 1, hi);
  }
}

// we cannot use XOR swap since when you initially run this,
// since the first element will be swapped with itself
// and on final loop, the last element will also be swapped with itself
function partition(arr, lo, hi) {
  var pivot = arr[hi];
  var i = lo - 1;
  var temp;
  for (var j = lo; j < hi; j++) {
    if(arr[j] <= pivot) {
      i++;
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  i++;
  temp = arr[i];
  arr[i]  = arr[hi];
  arr[hi] = temp;
  return i;
}

var arr = [5, 2, 4, 6, 1, 3];
console.log(arr);
quicksort(arr, 0, arr.length - 1);
console.log(arr);
