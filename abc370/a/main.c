#include <stdio.h>

int main(void) {
  int l, r;
  scanf("%d %d", &l, &r);
  if (l == 1 && r == 0) {
    puts("Yes");
  } else if (l == 0 && r == 1) {
    puts("No");
  } else {
    puts("Invalid");
  }
  return 0;
}
