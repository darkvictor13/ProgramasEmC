#include <stdio.h>

void deixar_bonitinho_o_for (int * n) {
  scanf("%d", n);
}

void ordenar (int * a,int * b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int soma_impares (int n1,int n2) {
  int soma = 0,i;
  if (n1 > n2) {
    ordenar (&n1,&n2);
  }
  for (i = n1 + 1; i < n2; i++) {
    if (i % 2 == 1) {
      soma += i;
    }
  }
  return soma;
}

int main () {
  int X,Y,quantas_repeticoes;
  deixar_bonitinho_o_for (&quantas_repeticoes);
  for (; quantas_repeticoes > 0; quantas_repeticoes --) {
    scanf("%d %d",&X,&Y);
    printf("%d\n", soma_impares (X,Y));
  }
  return 0;
}
