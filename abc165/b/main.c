#include <stdio.h>

int main(void) {
  long long x, deposit = 100;
  int years = 0;
  scanf("%lld", &x);
  while (1) {
    if (deposit >= x) {
      printf("%d\n", years);
      return 0;
    }
    deposit += deposit / 100;
    years += 1;
  }
}
