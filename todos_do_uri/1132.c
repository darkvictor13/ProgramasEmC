#include <stdio.h>

void ordenar (int * a1,int * a2) {
  int aux;
    aux = *a2;
    *a2 = *a1;
    *a1 = aux;
}

int soma_dos_n_divisiveis (int n1,int n2) {
  int i,soma = 0;
  if (n1 > n2) {
    ordenar (&n1,&n2);
  }
  for (i = n1; i <= n2; i++) {
    if (i % 13 != 0) {
      soma += i;
    }
  }
  return soma;
}

int main () {
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  printf("%d\n",soma_dos_n_divisiveis (num1,num2));
  return 0;
}
