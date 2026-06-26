n, a = STDIN.read.split.map(&:to_i)
puts n % 500 <= a ? "Yes" : "No"
