#include <stdio.h>

int main(void) {
  int r, g, b;

  scanf("%d %d %d", &r, &g, &b);
  int n = r * 100 + g * 10 + b;
  puts(n % 4 == 0 ? "YES" : "NO");

  return 0;
}
