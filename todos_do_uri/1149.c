#include <stdio.h>

void ate_ser_positivo (int *p) {
  while (p < 0) {
    scanf("%d", p);
  }
}

int soma_Consecutivos (int n1,int n2) {
  int i,soma = 0;
  for (i = 0; i < n2; i++) {
    soma += n1 + i;
  }
  return soma ;
}

int main () {
  int A = -1,N = -1;
  scanf ("%d", &A);
  ate_ser_positivo (&N);
  printf("%d\n", soma_Consecutivos (A,N) );
  return 0;
}
