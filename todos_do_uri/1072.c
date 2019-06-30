#include <stdio.h>

int dentro_do_intervalo (int n) {
  if (n >= 10 && n <= 20) {
    return 1;
  }else return 0;
}

int main () {
  int x,serao_lidos,count_in = 0,count_out;
  scanf("%d", &serao_lidos);
  count_out = serao_lidos;
  while (serao_lidos > 0) {
    scanf("%d", &x);
    count_in += dentro_do_intervalo (x);
    count_out -= dentro_do_intervalo (x);
    serao_lidos --;
  }
  printf("%d in\n%d out\n",count_in,count_out );
  return 0;
}
