#include <stdio.h> //sem vetor;

int eh_maior (int *maior,int atual) {
  if (*maior < atual) {
    *maior = atual;
    return 1;
  }
  return 0;
}

int main () {
  int num,maior,i,posicao_marcada = 1;
  scanf("%d", &num);
  maior = num;
  for (i = 2; i <= 100; i++) {
    scanf("%d", &num);
    if (eh_maior (&maior,num) == 1) {
      posicao_marcada = i;
    }
  }
  printf("%d\n%d\n",maior, posicao_marcada);
}
