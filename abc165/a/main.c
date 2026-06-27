#include <stdio.h>

int main(void) {
  int k, a, b;
  scanf("%d %d %d", &k, &a, &b);
  // (b / k) * k part finds the largest multiple of k that is less than or equal
  puts((b / k) * k >= a ? "OK" : "NG");
  // Alternative solution: find the largest multiple of k that is less than or
  // equal to b. puts(((a + k - 1) / k) * k <= b ? "OK" : "NG");
  return 0;
}
