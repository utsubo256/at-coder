#include <stdio.h>

int factorial(int n) {
  int total = 1;
  for (int i = 2; i <= n; i++) {
    total *= i;
  }
  return total;
}

int main(void) {
  int p, coins = 0;
  scanf("%d", &p);
  for (int i = 10; i >= 1; i--) {
    int coin = factorial(i);
    coins += p / coin;
    p %= coin;
  }
  printf("%d\n", coins);
  return 0;
}
