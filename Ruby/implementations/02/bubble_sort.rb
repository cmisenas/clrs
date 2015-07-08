def bubble_sort! arr
  (0..arr.length - 2).each do |i|
    for j in (arr.length - 1).downto(i + 1)
      if arr[j] < arr[j - 1]
        arr[j]     ^= arr[j - 1]
        arr[j - 1] ^= arr[j]
        arr[j]     ^= arr[j - 1]
        puts "Intermediary array = [#{arr.join(', ')}]"
      end
    end
  end
end

arr = [5, 2, 4, 6, 1, 3]
puts "Original array = [#{arr.join(', ')}]"
bubble_sort!(arr)
puts "Sorted array = [#{arr.join(', ')}]"

