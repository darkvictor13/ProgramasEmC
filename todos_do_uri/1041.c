#include <stdio.h>
void detectar_quadrante (float x,float y) {
  if (x == 0 && y == 0)
    printf("Origem\n");
  else if (x == 0 && y!=0)
    printf("Eixo Y\n");
  else if (x!=0 && y == 0)
    printf("Eixo X\n");
  else if (x > 0 && y > 0)
    printf("Q1\n");
  else if (x < 0 && y > 0)
    printf("Q2\n");
  else if (x < 0 && y < 0)
    printf("Q3\n");
  else if (x > 0 && y < 0)
    printf("Q4\n");
}

int main () {
  float x,y;
  scanf("%f %f",&x,&y);
  detectar_quadrante (x,y);
  return 0;
}
