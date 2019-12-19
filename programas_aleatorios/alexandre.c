#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXP 200
#define MAXV 100

typedef struct {
  char *nome;
  float media;
  float dp;
  float max;
  float min;
  float *vet;
  int tam;
}pessoa;

int load (char nome_arq[], pessoa v[], int *t) {
  int i,j;
  char temp[50], ch = ' ';
  float temp2[MAXV];
  FILE *arch = fopen(nome_arq, "r");
  if (arch == NULL) {
    printf("nao consegui abrir esse arquivo mano!\n");
    return 0;
  }

  for (i = 0; !feof(arch); i++) {
    fscanf(arch, "[^\n]%*c", temp);
    v[i].nome = malloc(strlen(temp) + 1);
    strcpy(v[i].nome, temp);

    for (j = 0; ch != '\n' && !feof(arch); j++) {
      fscanf(arch, "%f%c", temp2[j], &ch);
    }
    v[i].vet = malloc(j * sizeof(float));
    v[i].tam = j;
    for (int h = 0; h < j; h++) {
      v[i].vet[h] = temp2[h];
    }
  }
  fclose(arch);
  return 1;0
}

int main () {
  pessoa vetor[MAXP];
  int num_de_pessoas;
  load("pesos.txt", vetor, &num_de_pessoas);
}