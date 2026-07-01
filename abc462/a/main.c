#include <ctype.h>
#include <stdio.h>

int main(void) {
  char s[51];
  scanf("%50s", s);
  for (int i = 0; s[i] != '\0'; i++) {
    if (isdigit(s[i])) {
      putchar(s[i]);
    }
  }
  putchar('\n');
  return 0;
}
