#include <stdio.h>

int main(void) {
  long long x, deposit = 100;
  int years = 0;
  scanf("%lld", &x);
  while (deposit < x) {
    deposit += deposit / 100;
    years++;
  }
  printf("%d\n", years);
  return 0;
}
