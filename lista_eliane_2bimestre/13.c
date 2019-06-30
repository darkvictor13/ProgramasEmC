#include <stdio.h>

int soma_dos_digitos (float x) {
  int aux1,i = 10,resul = 0;float aux2,resp_dps_da_virgula;
  while (i < x){
  aux2 = x/i;
  printf("%f\n", aux2);
  aux1 = x/10;
  printf("%d\n", aux1);
  resp_dps_da_virgula = aux2 - aux1;
  resul += resp_dps_da_virgula * 10;
  i *= 10;
}
  return resul;
}

int main () {
  int x;
  scanf("%d",&x);
  printf("%d\n", soma_dos_digitos (x));
  return 0;
}
