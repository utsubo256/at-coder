N = gets.to_i
sum = 0
(1..N).each do |num|
  sum += num unless num % 3 == 0 || num % 5 == 0
end
puts sum
