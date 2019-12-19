#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PESSOAS 200
#define TAM_VET 100
#define TAM_NOME 50

typedef struct {
  float *v;
  int tam;
  float max;
  float min;
}vetor_dinamico;

typedef struct {
  vetor_dinamico vet;
  char *nome;
  float media;
  float desvio_padrao;
}pessoa;

int lerArquivo(char *nome_arq, pessoa **p, int *tam) {
  int fim_do_arquivo = 1;
  int i,j;
  char temp[TAM_NOME], ch = ' ';
  float aux[TAM_VET];
  pessoa v[MAX_PESSOAS];
  pessoa *ponteiro_aux;

  FILE *arch = fopen(nome_arq, "r");
  if (!arch) return 0;

  for (j = 0; !feof(arch); j++) {
    fscanf(arch,"%[^\n]%*r",temp);
    printf("%s\n", temp);
    scanf("%*c");
    v[j].nome = malloc(strlen(temp) + 1);
    
    for (i = 0; ch != '\n'; i++) {
      fscanf(arch, "%f%c", &aux[i], &ch);
    }
    fscanf(arch, "%*r");
    v[j].vet.v = malloc(i * sizeof(float));
    for (int k = 0; k < i; k++) {//copia
      v[j].vet.v[k] = aux[k];
    }
  }
  *tam = j;
  *p = malloc((*tam) * sizeof(pessoa));
  for (int k = 0; k < *tam; k++) {
    *p[k] = v[k]; 
  }
  fclose(arch);
  return 1;
}

void printName(pessoa p[], int t) {
  for (pessoa *fim = (p + t); p < fim; p++) {
    printf("%s\n",p->nome);
  }
}

void printVet(float *v, int t) {
  for (float *fim = (v + t); v < fim; v++) {
    printf("%f ");
  }
  printf("\n");
}

void printTodosOsVet(pessoa p[], int t) {
  printf("printando todos os vetores\n");
  for (pessoa *fim = (p + t); p < fim; p++) {
    printVet(p->vet.v, p->vet.tam);
  }
  printf("\n");
}

int main (int argc, char *argv[]) {
  pessoa *vetor;
  int num_de_pessoas;

  if (!lerArquivo(argv[1], &vetor, &num_de_pessoas)) {
    printf("Nao consegui ler o arquivo!\n");
  }
  printf("Nomes de todos as pessoas\n");
  //printName(vetor, num_de_pessoas);
  //printTodosOsVet(vetor, num_de_pessoas);
  //calc(vetor, num_de_pessoas);
  //relat(vetor, num_de_pessoas, argv[2]);
  //liberaMemoria(vetor, num_de_pessoas);
  return 0;
}