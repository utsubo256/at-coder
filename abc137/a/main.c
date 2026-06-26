#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  int max_val = a + b;
  if (max_val < a - b) {
    max_val = a - b;
  }
  if (max_val < a * b) {
    max_val = a * b;
  }
  printf("%d\n", max_val);
  return 0;
}
