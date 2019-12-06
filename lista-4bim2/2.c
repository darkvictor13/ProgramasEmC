#include <stdio.h>
#include <stdlib.h>

#define MAXV 11
#define MAXA 200

typedef struct {
  int *jogada;
  int tam;
  int num_de_acertos;
}apostador;

void lerVet(int v[], int t) {
  int *fim = (v + t);

  for (; v < fim; v++) {
    scanf("%d", v);
  }
}

void printandoVetor(int vet[], int tam) {
  int *fim = (vet + tam);

  for (; vet < fim; vet++) {
    printf("%d ", *vet);
  }
  printf("\n");
}



int lerUmaAposta(FILE *a,int vet[], int *tam) {
  char ch; int i = 1;
  if (fscanf(a,"%d%c",vet,&ch) == EOF) return 0;
  while (ch != '\n' && ch != EOF) {
    if (ch == ' ') {
      i++;
    }
    fscanf(a,"%f%c",&vet[i],&ch);
  }
  *tam = i;
  return 1;
}

int load(char nome_do_arquivo[], apostador *p, int *n) {
  apostador *inicio = p;

  FILE *arch = fopen(nome_do_arquivo, "r");
  if (!arch) return 0;

  while (1) {
    p->jogada = malloc(sizeof(int) * MAXV);
    printf("fiz o malloc %d\n",p - inicio);
    if (!lerUmaAposta(arch, p->jogada, &p->tam)) {
      free(p->jogada);
      p--;
      break;
    }
    printf("li %d\n",p - inicio);
    p->jogada = realloc(p->jogada, p->tam);
    printf("realoquei %d\n",p - inicio);
    p++;
  }
  *n = p - inicio;
  printf("num de apostadores carregados = %d\n", *n);
  fclose(arch);
  return 1;
}

int main (int argc, char *argv[]) {
  int resultado[6];
  apostador todas_as_apostas[MAXA];
  int num_de_apostadores;
  if (! load(argv[1], todas_as_apostas, &num_de_apostadores)) {
    printf("erro na leitura\n");
    return 0;
  }
  printf("apostas :\n");
  for (int i = 0; i < num_de_apostadores; i++) {
    printf("jogada %d = ",i);
    printandoVetor(todas_as_apostas[i].jogada, todas_as_apostas[i].tam);
  }
  printf("por favor entre com o resultado do concurso\n");
  lerVet(resultado, 6);
  printf("resultado = ");
  printandoVetor(resultado, 6);
  return 0;
}