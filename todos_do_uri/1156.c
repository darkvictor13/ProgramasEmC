#include <stdio.h>

double valor_s () {
  int i,j;double s = 0;
  for (i = 1,j = 1; i < 40; i += 2,j *= 2) {
    s += (float)i/j;
  }
  return s;
}

int main () {
  printf("%.2lf\n", valor_s());
  return 0;
}
