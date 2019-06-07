#include <stdio.h>

void print_char (int i, char c) {
  int j;
  for (j = 1; j <= i; j++) //inicializacao; condicao; incrementacao;
    printf("%c", c);
/* int j=1;
   while (j <= i) {
    printf("%c", c);
    j++;
  }  */  //os 2 jeitos estao funcionais;
}

int main () {
  int n,i; char ch;
  scanf("%d %c",&n,&ch);
  while (n>0) {

  for(i=1;n>0;)
    for (; i <= n; i++) {
      print_char (i,ch);
      printf("\n");
    }
scanf("%d %c",&n,&ch);
}    
return 0;
}
