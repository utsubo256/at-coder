#include <stdio.h>

int main(void) {
  int n, x, t;
  scanf("%d %d %d", &n, &x, &t);
  printf("%d\n", (n + x - 1) / x * t);
  return 0;
}
