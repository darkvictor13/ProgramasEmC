#include <stdio.h>

void fibonacci (int n) {
  int aux1 = 0,aux2 = 1,printa_agr = 0,i;
  if (n == 1) {
    printf("%d", aux1);
  }
  if (n == 2) {
    printf("%d %d", aux1,aux2);
  }
  if (n >= 3) {
    printf("%d %d", aux1,aux2);
    for (i = 3; i <= n; i++) {
      printa_agr = aux1 + aux2;
      printf(" %d", printa_agr);
      aux1 = aux2;
      aux2 = printa_agr;
    }
    printf("\n");
    }
  }

int main () {
  int tamanho_da_sequencia;
  scanf("%d", &tamanho_da_sequencia);
  fibonacci (tamanho_da_sequencia);
  return 0;
}
