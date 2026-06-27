#include <stdio.h>

int main(void) {
  int a, b, k, target_numbers_size;
  scanf("%d %d %d", &a, &b, &k);
  target_numbers_size = b - a + 1;
  if (target_numbers_size <= k * 2) {
    for (int l = a; l <= b; l++) {
      printf("%d\n", l);
    }
  } else {
    for (int m = a; m < a + k; m++) {
      printf("%d\n", m);
    }
    for (int n = b - k + 1; n <= b; n++) {
      printf("%d\n", n);
    }
  }
  return 0;
}
