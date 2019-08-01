#include <stdio.h>
#include <math.h>

void calcula_cubo (int n) {
  int mult,soma,qntd,j,i = 1;
  mult = pow (n,3);
  while(soma < mult){
    for(j = i, soma = 0, qntd = n; qntd > 0; qntd--, j+=2){
      soma += j;
    }
    if(soma == mult){
      for(j = i, qntd = n; qntd > 0; qntd--, j+=2){
        printf("%d ", j);
      }
    printf("\n");
    }
  }
}

int main
