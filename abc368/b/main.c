#include <stdio.h>

void sort_desc(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int key = a[i];
    int j = i - 1;

    while (j >= 0 && a[j] < key) {
      a[j + 1] = a[j];
      j--;
    }

    a[j + 1] = key;
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
