def merge! a, p, q, r
  len1 = q - p + 1
  len2 = r - q
  lArr = a[p..(p + len1 - 1)]
  rArr = a[(q + 1)..(q + len2)]
  lArr[len1] = Float::INFINITY
  rArr[len2] = Float::INFINITY

  i = 0
  j = 0
  (p..r).each do |k|
    if lArr[i] <= rArr[j]
      a[k] = lArr[i]
      i+=1
    else
      a[k] = rArr[j]
      j+=1
    end
  end
  return a
end

def merge_sort! a, p, r
  if p < r
    q = (p+r)/2
    merge_sort!(a, p, q)
    merge_sort!(a, q + 1, r)
    merge!(a, p, q, r)
  end
end

arr = [5, 2, 4, 6, 1, 3]
puts "Original array = [#{arr.join(', ')}]"
merge_sort!(arr, 0, arr.length - 1)
puts "Sorted array = [#{arr.join(', ')}]"

