#include <stdio.h>

void sort_desc(int a[], int n) {
  for (int i = 0; i < n; i++) {
    int max_index = i;

    for (int j = i + 1; j < n; j++) {
      if (a[j] > a[max_index]) {
        max_index = j;
      }
    }

    int tmp = a[i];
    a[i] = a[max_index];
    a[max_index] = tmp;
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  int a[n], x, count = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    a[i] = x;
  }

  sort_desc(a, n);
  while (a[0] > 0 && a[1] > 0) {
    a[0]--;
    a[1]--;
    sort_desc(a, n);
    count++;
  }
  printf("%d\n", count);
  return 0;
}
