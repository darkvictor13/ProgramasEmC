#include <stdio.h>

void sao_multiplos (int a, int b) {
  if (a%b == 0){
    printf("Sao Multiplos\n");
  }else if (b%a == 0){
        printf("Sao Multiplos\n");
      }else printf("Nao sao Multiplos\n");
}

int main () {
  int x,y;
  scanf("%d %d",&x, &y);
  sao_multiplos (x,y);
  return 0;
}
