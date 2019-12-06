#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PESSOAS 200
#define TAM_VET 100
#define TAM_NOME 50

typedef struct {
  float *v;
  int tam;
}vetor_dinamico;

typedef struct {
  vetor_dinamico vet;
  char *nome;
  float media;
  float desvio_padrao;
}pessoa;

void guardaUmNome(FILE *a,char **str) {
  *str = malloc(TAM_NOME);
  fscanf(a,"%[^\n]%*c",*str);
  *str = realloc(*str,strlen(*str));
}

int lerVet(FILE *a, float *v, int *t) {
  float *inicio = v;
  char ch;

  fscanf(a, "%f%c",v,&ch);
  for (v = (v + 1); ch != '\n' && ch != EOF; v++) {
    fscanf(a, "%f%c",v,&ch);
  }
  *t = v - inicio;
  return 1;
}

int load(char nome_arquivo[], pessoa **p, int *t) {
  pessoa *ponteiro_auxiliar;
  FILE *arch = fopen(nome_arquivo,"r");
  if (arch == NULL) return 0;

  *p = malloc(sizeof(pessoa) * MAX_PESSOAS);
  ponteiro_auxiliar = *p;

  for (; 1; ponteiro_auxiliar++) {
    guardaUmNome(arch,&ponteiro_auxiliar->nome);
    ponteiro_auxiliar->vet.v = malloc(TAM_VET * sizeof(float));
    if (!lerVet(arch,ponteiro_auxiliar->vet.v,&ponteiro_auxiliar->vet.tam)) break;
    ponteiro_auxiliar->vet.v = realloc(ponteiro_auxiliar->vet.v,ponteiro_auxiliar->vet.tam * sizeof(float));
  }
  *t = ponteiro_auxiliar - *p;
  *p = realloc(*p, *t);
  fclose(arch);
}

void printName(pessoa p[], int t) {
  pessoa *fim = (p + t);

  for (;p < fim; p++) {
    printf("%s\n",p->nome);
  }
}

void printVet(float v[], int t) {
  float *fim = (v + t);

  for (; v < fim; v++) {
    printf("%f ",*v);
  }
  printf("\n");
}

int main () {
  pessoa *vetor;
  int num_de_pessoas;
  load("pesos.txt",&vetor,&num_de_pessoas);
  printName(vetor,num_de_pessoas);
  printVet(vetor->vet.v,vetor->vet.tam);
  return 0;
}