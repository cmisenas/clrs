/*
 * Things I learned/remembered:
 * Arrays are always passed by reference unless you make a deep copy by using slice
 */

function insertion_sort(arr) {
  var key, i;

  for (var j = 1; j < arr.length; j++) {
    key = arr[j];
    i = j - 1;
    while (i >= 0 && arr[i] > key) {
      arr[i + 1] = arr[i];
      i--;
    }
    arr[i + 1] = key;
  }
}


var arr1 = [5, 2, 4, 6, 1, 3];
console.log(arr1);
insertion_sort(arr1);
console.log(arr1);

