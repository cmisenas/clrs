function merge(a, p, q, r) {
  var len1 = q - p + 1,
      len2 = r - q,
      lArr = a.slice(p, p + len1),
      rArr = a.slice(q + 1, q + len2 + 1),
      i = 0,
      j = 0;

  lArr[len1] = Infinity;
  rArr[len2] = Infinity;

  for (var k = p; k <= r; k++) {
    if (lArr[i] <= rArr[j]) {
      a[k] = lArr[i];
      i++;
    } else {
      a[k] = rArr[j];
      j++;
    }
  }
}

function merge_sort(a, p, r) {
  if (p < r) {
    var q = Math.floor((p+r)/2);
    merge_sort(a, p, q);
    merge_sort(a, q + 1, r);
    merge(a, p, q, r);
  }
}

var arr1 = [5, 2, 4, 6, 1, 3];
console.log(arr1);
merge_sort(arr1, 0, arr1.length - 1);
console.log(arr1);

