#include <stdio.h>

int main(void) {
  int x;
  scanf("%d", &x);
  puts(x >= 3 && x <= 18 ? "Yes" : "No");
  return 0;
}
