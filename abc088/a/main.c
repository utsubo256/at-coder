#include <stdio.h>

int main(void) {
  int n, a;
  scanf("%d %d", &n, &a);
  puts(n % 500 <= a ? "Yes" : "No");
  return 0;
}
