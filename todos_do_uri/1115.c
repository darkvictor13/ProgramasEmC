#include <stdio.h>

int qual_quadrante (int x,int y) {
  if (x > 0 && y > 0) {
    return 1;
  }else if (x < 0 && y > 0) {
    return 2;
  } else if (x < 0 && y < 0) {
    return 3;
  }else if (x > 0 && y < 0) {
    return 4;
  }
}

void printa_resul (int R) {
  if (R == 1) {
    printf("primeiro\n");
  }else if (R == 2) {
    printf("segundo\n");
  } else if (R == 3) {
    printf("terceiro\n");
  }else if (R == 4) {
    printf("quarto\n");
  }
}

int main () {
  int x,y,resposta;
  while (x != 0 && y != 0) {
    scanf("%d %d",&x,&y);
    resposta = qual_quadrante (x,y);
    printa_resul(resposta);
  }
  return 0;
}
