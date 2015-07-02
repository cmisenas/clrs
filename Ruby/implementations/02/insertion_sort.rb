def insertion_sort a
  a[1..-1].each_with_index do |key, j|
    j+=1
    i=j-1
    while i>=0 && a[i]>key
      a[i+1]=a[i]
      i-=1
    end
    a[i+1]=key
  end
  return a
end

arr = [5, 2, 4, 6, 1, 3]
puts insertion_sort arr

