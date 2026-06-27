#include <stdio.h>

int main(void) {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  while (1) {
    c -= b;
    if (c <= 0) {
      puts("Yes");
      return 0;
    }
    a -= d;
    if (a <= 0) {
      puts("No");
      return 0;
    }
  }
}
