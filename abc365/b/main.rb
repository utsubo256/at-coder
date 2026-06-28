n = gets.to_i
a = gets.split.map(&:to_i)

max_index = 0
second_index = -1
(1..(n-1)).each do |index|
  if a[max_index] < a[index]
    second_index = max_index
    max_index = index
  elsif second_index == -1 || a[second_index] < a[index]
    second_index = index
  end
end
puts second_index + 1
