#include <stdio.h>

void eu_estudei_ponteiro_entao_vou_usar (int *n){
  scanf ("%d",n);
}

int main () {
  int x;
  eu_estudei_ponteiro_entao_vou_usar (&x);
  while (x>0) {
    printf ("%d\n",x);
    eu_estudei_ponteiro_entao_vou_usar (&x);
  }
  return 0;
}
