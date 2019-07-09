#include <stdio.h>
#include <math.h>

int tamanho_da_casa (int l1,int l2) {
  int aux;
  aux = (l1 * l2);
  return aux;
}

int tamanho_do_terreno (int tam_casa) {
  int aux;
  aux = (sqrt(tam_casa));
  return aux;
}

int resposta (int c1,int c2,int perc) {
  int aux1,aux2,aux3;
  aux1 = tamanho_da_casa (c1,c2);
  aux2 = (aux1 * 100)/perc;
  aux3 = (tamanho_do_terreno(aux2));
  return aux3;
}

int main () {
  int compr_casa,larg_casa,percentual,aux;
  while (compr_casa != 0) {
    scanf("%d %d %d",&compr_casa,&larg_casa,&percentual);
    aux = resposta(compr_casa,larg_casa,percentual);
    printf("%d\n",aux);
  }
  return 0;
}
