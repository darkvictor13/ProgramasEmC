#include <stdio.h>

void printVet(float v[],int t) {
  float *final = (v + t);
  float *inicio = v;

  for (; v < final; v++) {
    printf("#%d = %.3f\n",(inicio - v),*v);
  }
  printf("\n");
}

float somaVet (float v[],int t) {
  float *final = (v + t);
  float soma = 0;

  for (; v < final; v++) {
    soma += *v;
  }
  return soma;
}

void lendoOArquivoSalvandoNumVet(float v[],int *t,FILE *arq) {
  float *inicio = v;

  for (; fscanf(arq,"%f",v) != EOF; v++) {
    ;
  }
  *t = (v - inicio);
}

int main () {
  FILE *ponteiro_para_arquivo,*salva_result;
  float v[30],soma;
  int tam,i;
  ponteiro_para_arquivo = fopen("dados.txt","r");
  salva_result = fopen("soma_vetor.txt","w");
  lendoOArquivoSalvandoNumVet(v,&tam,ponteiro_para_arquivo);
  printVet(v,tam);
  soma = somaVet(v,tam);
  printf("%.3f\n\n",soma);
  fprintf(salva_result,"%.3f\n",soma);
  return 0;
}