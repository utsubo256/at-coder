#include <stdio.h>

int main(void) {
  long long n;
  int k;
  scanf("%lld %d", &n, &k);
  for (int i = 0; i < k; i++) {
    if (n % 200 == 0) {
      n /= 200;
    } else {
      n = n * 1000 + 200;
    }
  }
  printf("%lld\n", n);
  return 0;
}
