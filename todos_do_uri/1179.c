#include <stdio.h>

void printVetPar(int vet[],int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("par[%d] = %d\n",i,vet[i]);
  }
}

void printVetImpar(int vet[],int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("impar[%d] = %d\n",i,vet[i]);
  }
}

int main () {
  int num,par[5],impar[5],conta_impares,conta_pares,conta_tot;
  conta_tot = conta_pares = conta_impares = 0;

  while (conta_tot < 15) {
    scanf("%d",&num);

    if (num % 2) {
      impar[conta_impares++] = num;
    }else {
      par[conta_pares++] = num;
    }

    if (conta_pares == 5) {
      printVetPar(par,5);
      conta_pares = 0;
    }
    if (conta_impares == 5) {
      printVetImpar(impar,5);
      conta_impares = 0;
    }

    conta_tot++;
  }
  printVetImpar(impar,conta_impares);
  printVetPar(par,conta_pares);
  return 0;
}
