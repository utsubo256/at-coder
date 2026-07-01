#include <stdio.h>

int main(void) {
  char s_ab, s_ac, s_bc;
  scanf("%c %c %c", &s_ab, &s_ac, &s_bc);
  int score[3] = {0, 0, 0};
  if (s_ab == '<')
    score[1]++;
  else
    score[0]++;

  if (s_ac == '<')
    score[2]++;
  else
    score[0]++;

  if (s_bc == '<')
    score[2]++;
  else
    score[1]++;

  if (score[0] == 1)
    puts("A");
  else if (score[1] == 1)
    puts("B");
  else
    puts("C");

  return 0;
}
