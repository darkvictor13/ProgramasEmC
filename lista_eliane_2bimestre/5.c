#include <stdio.h>

void caracteres_maior_p_menor (int i, char c){
  int j;
  for (j = 1; j <= i; j++)
    printf("%c", c);
  }

  int main () {
    int n,i; char ch;
    scanf("%d %c",&n,&ch);
    while (n>0){
    for (i = n;i > 0; i--) {
      caracteres_maior_p_menor(i,ch);
      printf("\n");
    }
    scanf("%d %c",&n,&ch);
    }
return 0;
}
