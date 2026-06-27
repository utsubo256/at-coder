k, a, b = STDIN.read.split.map(&:to_i)
puts (b / k) * k >= a ? "OK" : "NG"
