#include <stdio.h>

int factorial(int n) {
  int total = 1;
  if (n == 0) {
    return total;
  }
  for (int i = n; i >= 1; i--) {
    total = total * i;
  }
  return total;
}

int main(void) {
  int p, coin, nums = 0;
  scanf("%d", &p);
  for (int i = 10; i >= 1; i--) {
    coin = factorial(i);
    while (p >= coin) {
      p -= coin;
      nums++;
    }
  }
  printf("%d\n", nums);
  return 0;
}
