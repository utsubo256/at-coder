#include <stdio.h>

int main(void) {
  char s[101];
  int e = 0, w = 0;
  scanf("%100s", s);
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == 'E') {
      e++;
    } else {
      w++;
    }
  }
  puts(e > w ? "East" : "West");

  return 0;
}
