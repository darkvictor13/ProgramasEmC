#include <stdio.h>

void imprime_char(char ch,int n,int count){
  int i;
  for (i = 0; i <=n; i++,ch += count) {
    printf("%c",ch);
  }
}

int main () {
  char c,c1;
  int contador_positivo,contador_negativo;
  scanf("%c %c",&c,&c1);
  while (c != c1) {
    printf("[%c] [%c]\n",c,c1);
    if (c < c1)
    imprime_char (c,c1-c,1);
    else
    imprime_char (c,c-c1,-1);
    printf("\n");
    scanf(" %c %c",&c,&c1);
  }
  return 0;
}
