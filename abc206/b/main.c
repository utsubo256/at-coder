#include <stdio.h>

int main(void) {
  int n, days = 0, bank = 0;
  scanf("%d", &n);
  while (1) {
    if (bank >= n) {
      printf("%d\n", days);
      return 0;
    }
    days++;
    bank += days;
  }
}
