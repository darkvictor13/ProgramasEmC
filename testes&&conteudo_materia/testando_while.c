#include <stdio.h>
int main () {
  int contador,vezes_repetida;
  scanf("%d",&vezes_repetida);
  contador=0;
  /*while (contador > vezes_repetida) {
    printf("%d\n",vezes_repetida-contador-1);
    contador += 1;
  }*/
  while (contador>=0) {
    printf("%d\n",contador);
    contador -= 1;
  }
}
