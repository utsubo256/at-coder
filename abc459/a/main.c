#include <stdio.h>

int main(void) {
  int x;
  scanf("%d", &x);
  for (int i = 0; i < 10; i++) {
    if (i != x - 1) {
      putchar("HelloWorld"[i]);
    }
  }
  putchar('\n');
  return 0;
}
