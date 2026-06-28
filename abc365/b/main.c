#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int max_index = 0, second_index = -1;
  for (int i = 1; i < n; i++) {
    if (a[max_index] < a[i]) {
      second_index = max_index;
      max_index = i;
    } else if (second_index == -1 || a[second_index] < a[i]) {
      second_index = i;
    }
  }
  printf("%d\n", second_index + 1);
  return 0;
}
