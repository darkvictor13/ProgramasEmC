#include <stdio.h>

void roubar_eh_pecado (int par,int jogador1,int jogador2,int roubo,int acusa){
  int vitoria,soma;
  soma = jogador1 + jogador2;
  if ((soma%2 == 0 && par == 1) || (soma%2 == 1 && par == 0)) {
     vitoria = 1;
 } else
    vitoria = 2;

  if ((roubo == 1 && acusa == 0) || (roubo == 0 && acusa == 1)) {
    vitoria = 1;
 } else if (roubo == 1 && acusa ==1)
        vitoria = 2;

  printf("Jogador %d ganha!\n",vitoria);
}

int main () {



    int p, j1, j2, r, a;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    roubar_eh_pecado (p,j1,j2,r,a);
    return 0;
}
