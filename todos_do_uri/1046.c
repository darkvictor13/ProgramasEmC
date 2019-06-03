#include <stdio.h>

int tempo_jogo (int a, int b) {
  int resul;
  resul = b-a;
  if (resul < 0){
    printf("O JOGO DUROU %d HORA(S)\n",resul+24);return 0;
  }else if (resul == 0){
    printf("O JOGO DUROU %d HORA(S)\n",resul+24);return 0;
  }else if (resul > 24){
    printf("O JOGO DUROU %d HORA(S)\n",resul-24);return 0;
  }else printf("O JOGO DUROU %d HORA(S)\n",resul);
  return 0;
}

int main () {
  int x,y;
  scanf("%d %d",&x,&y);
  tempo_jogo (x,y);
  return 0;
}
