#include <stdio.h>

int main(void) {
  int X, A, B;

  scanf("%d %d %d", &X, &A, &B);

  printf("%d\n", (X - A) % B);
}
