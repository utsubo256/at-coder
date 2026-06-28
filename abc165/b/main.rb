x = gets.to_i

deposit = 100
years = 0
while deposit < x
  deposit += deposit / 100
  years += 1
end
puts years
