#include <stdio.h>

void ordenar (int * a1,int * a2) {
  int aux;
  if (*a2 > *a1) {
    aux = *a2;
    *a2 = *a1;
    *a1 = aux;
  }
}

void print_numeros (int a1,int a2) {
  int i;
  for (i = a2; i <= a1; i++) {
    printf("%d ", i);
  }
}

int print_soma (int a1,int a2) {
  int i,soma = 0;
  for (i = a2; i <= a1; i++) {
    soma += i;
  }
  return soma;
}

int main () {
  int num1,num2;
  scanf("%d %d",&num1, &num2);
  while (num1 > 1 && num2 > 1) {
    ordenar (&num1,&num2);
    print_numeros (num1,num2);
    printf("Sum=%d\n",print_soma (num1,num2));
    scanf("%d %d",&num1, &num2);
  }
  return 0;
}
