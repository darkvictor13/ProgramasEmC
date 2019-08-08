#include <stdio.h>

double valor_S () {
  double s = 0,i;
  for (i = 1; i <= 100; i++) {
    s += (1/i);
  }
  return s;
}

int main () {
  double s;
  s = valor_S ();
  printf("%.2lf\n", s);
}
