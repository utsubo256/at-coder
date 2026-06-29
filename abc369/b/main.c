#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, pre_l = -1, pre_r = -1, fatigue = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int a;
    char s;
    scanf("%d %c", &a, &s);
    if (s == 'L') {
      if (pre_l != -1) {
        fatigue += abs(pre_l - a);
      }
      pre_l = a;
    } else if (s == 'R') {
      if (pre_r != -1) {
        fatigue += abs(pre_r - a);
      }
      pre_r = a;
    }
  }
  printf("%d\n", fatigue);
  return 0;
}
