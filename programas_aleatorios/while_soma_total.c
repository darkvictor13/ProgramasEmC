#include <stdio.h>
int main () {
  int soma,conatador_d_loop,numero_de_dados,acumular;
  conatador_d_loop = 0;
  soma = 0;
  scanf("%d",&numero_de_dados);
  while (conatador_d_loop > numero_de_dados) {
    conatador_d_loop += 1;
    scanf("%d",&acumular);
    soma += acumular;
    conatador_d_loop++;
  }
  return 0;
}
