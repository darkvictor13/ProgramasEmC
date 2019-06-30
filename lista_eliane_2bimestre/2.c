#include <stdio.h>

int main () {
  int x,soma = 0,aux = 1;
  scanf ("%d",&x);
  for (;x > 0;){
    soma += x;
    soma *= 10;
  }
  printf("%d\n", soma/10);
  return 0;
}
