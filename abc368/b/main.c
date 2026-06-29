#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int sum = 0;
  int max = 0;
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);

    sum += a;
    if (a > max) {
      max = a;
    }
  }

  int answer = sum / 2;
  if (sum - max < answer) {
    answer = sum - max;
  }

  printf("%d\n", answer);
  return 0;
}
