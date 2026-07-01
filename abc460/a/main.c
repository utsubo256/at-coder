#include <stdio.h>

int main(void) {
  int n, m, count = 0;
  scanf("%d %d", &n, &m);
  while (m != 0) {
    m = n % m;
    count++;
  }
  printf("%d\n", count);
  return 0;
}
