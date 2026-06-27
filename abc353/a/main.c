#include <stdio.h>

int main(void) {
  int n, first;
  scanf("%d", &n);
  scanf("%d", &first);

  for (int i = 2; i <= n; i++) {
    int h;
    scanf("%d", &h);
    if (h > first) {
      printf("%d\n", i);
      return 0;
    }
  }
  puts("-1");
  return 0;
}
