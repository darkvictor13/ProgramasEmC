#include <stdio.h>

void print_char (int i, char c) {
  int j;
  for (j = 1; j <= i; j++) //inicializacao; condicao; incrementacao;
    printf("%c", c);
}

int main () {
  int entrada,numero_linhas;
  char X;
  scanf("%d %c",&entrada,&X);
  while (entrada > 0){
      numero_linhas = 1;
      while (numero_linhas<=entrada) {
        if (numero_linhas == 1 || numero_linhas == entrada) {
          print_char (entrada,X);
          numero_linhas++;
        } else {
          print_char (1,X);
          print_char (entrada - 2,' ');
          print_char (1,X);
          numero_linhas++;
        }
        printf("\n");
      }
    scanf("%d %c",&entrada,&X);
  }
return 0;
}
