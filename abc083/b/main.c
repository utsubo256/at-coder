#include <stdio.h>

int digit_sum(int n) {
  int total = 0;
  while (n > 0) {
    total += n % 10;
    n /= 10;
  }
  return total;
}

int main(void) {
  int n, a, b, answer = 0;
  scanf("%d %d %d", &n, &a, &b);
  for (int i = 1; i <= n; i++) {
    int digit_total = digit_sum(i);
    if (digit_total >= a && digit_total <= b) {
      answer += i;
    }
  }
  printf("%d\n", answer);
  return 0;
}
