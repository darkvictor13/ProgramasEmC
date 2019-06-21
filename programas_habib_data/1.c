#include <stdio.h>

void leitura (int *s){
  scanf("%d",s);
}

int dias_do_ano (int n) {
  if (n%4 == 0) {
    if (n%100 != 0 || n%400 == 0) {
      return 366;
    }else return 365;
  }else return 365;
}

int main () {
  int x;
  leitura (&x);
  while (x>1600){
    printf("%d\n", dias_do_ano (x));
    leitura (&x);
  }
  return 0;
}
