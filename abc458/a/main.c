#include <stdio.h>
#include <string.h>

int main(void) {
  char s[31];
  int n;
  scanf("%30s %d", s, &n);

  int len = strlen(s);
  for (int i = n; i < len - n; i++) {
    putchar(s[i]);
  }
  putchar('\n');
  return 0;
}
