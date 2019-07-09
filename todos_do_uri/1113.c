#include <stdio.h>

int crescente (int a,int b) {
  if (a < b) {
    return 1;//crescente
  }else if (a > b) {
    return 0;//decrescente
  }
}

void printa (int binario) {
  if (binario == 1) {
    printf("Crescente\n");
  }else if (binario == 0) {
    printf("Decrescente\n");
  }
}

int acaba_programa (int a,int b) {
  if (a == b) {
    return 1;
  }
  return 0;
}

int main () {
  int x = 1,y = 0,aux;
  while (1) {
    scanf("%d %d",&x,&y);
    if (acaba_programa (x,y) == 1) {
      break;
    }else {
      aux = crescente (x,y);
      printa (aux);
    }
  }
  return 0;
}
