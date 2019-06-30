#include <stdio.h>

int leap(int jusisvaldison){
    if(jusisvaldison%400==0){return 1;}
    if(jusisvaldison%100==0){return 0;}
    if(jusisvaldison%4==0){return 1;}
    return 0;
}

int main () {
  int ano,aux;
  printf("entre com 1 ano\n");
  scanf("%d", &ano);
  printf("\n");
  while (ano > 0) {
  aux = leap (ano);
  if (aux == 1){
    printf("ano e bissexto\n\n");
  }else {
    printf("ano nao e bissexto\n\n");
  }
  printf("proximo ano\n");
  scanf("%d", &ano);
  printf("\n");
}
  return 0;
}
