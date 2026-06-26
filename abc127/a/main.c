#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a >= 13) {
    printf("%d\n", b);
  } else if (a <= 5) {
    printf("%d\n", 0);
  } else {
    printf("%d\n", b / 2);
  }
  return 0;
}
