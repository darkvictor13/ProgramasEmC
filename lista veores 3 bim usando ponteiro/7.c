#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  scanf("%d",t);

  for (int *final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

void achaOMaiorEColocaNaPrimeiraCasa(int *dest,int *org,int t) {
  int *maior = org,*inicio_da_org = org,*p;
  
  for (p = org; p < (org + t); p++) {
    if (*p > *maior) {
      maior = p;
    }
  }
  for (p = dest;p < (dest + t); p++,org++) {
    *p = *org;
  }
  *dest = *maior;
  *(dest + (maior - inicio_da_org)) = *inicio_da_org;
}

void printaVet(int *v,int t) {
  int *final = (v + t);

  for (;v < final; v++) {
    printf("%d\n",*v);
  }
}

int main () {
  int origem[maxtam],destino[maxtam],tam;

  preencheVet(origem,&tam);
  achaOMaiorEColocaNaPrimeiraCasa(destino,origem,tam);
  printf("vet resposta:\n");
  printaVet(destino,tam);
  return 0;
}
