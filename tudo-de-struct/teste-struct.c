#include <stdio.h>

typedef struct {
  float tam;
  float peso;
  char RG[10];
  char cpf[12];
}pessoa;

int main () {
  pessoa jao;

  scanf("%f",&jao.tam);
  scanf("%f%*c",&jao.peso);
  scanf("%[^\n]%*c",jao.RG);
  scanf("%[^\n]",jao.cpf);

  printf("tamanho = %.2f\n",jao.tam);
  printf("peso = %.2f\n",jao.peso);
  printf("RG = [%s]\n",jao.RG);
  printf("CPF = [%s]\n",jao.cpf);
  return 0;
}