#include <stdio.h>

void loop (int *ponteiro) {
  scanf("%d", ponteiro);
}

float divisao (int X,int Y) {
  return ((float)X/Y);
}

void printando_bonitinhu (int x,int y) {
  float aux = divisao (x,y);
  if (y == 0) {
    printf("divisao impossivel\n");
  }else {
    printf("%.1f\n", aux);
  }
}

int main () {
  int quantos_casos,x,y;
  loop (&quantos_casos);
  for (; quantos_casos > 0; quantos_casos --) {
    scanf("%d %d", &x,&y);
    printando_bonitinhu (x,y);
  }
}
