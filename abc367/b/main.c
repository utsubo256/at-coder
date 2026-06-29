#include <stdio.h>
#include <string.h>

int main(void) {
  char x[20];
  scanf("%s", x);

  int len = strlen(x);
  while (len > 0 && x[len - 1] == '0') {
    x[len - 1] = '\0';
    len--;
  }
  if (len > 0 && x[len - 1] == '.') {
    x[len - 1] = '\0';
  }
  puts(x);
  return 0;
}
