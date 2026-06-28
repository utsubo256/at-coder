#include <stdio.h>

int main(void) {
  int n, days = 0, total = 0;
  scanf("%d", &n);
  while (total < n) {
    days++;
    total += days;
  }
  printf("%d\n", days);
  return 0;
}
