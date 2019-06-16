#include <stdio.h>

void print_char (int i, char c) {
  int j;
  for (j = 1; j <= i; j++) //inicializacao; condicao; incrementacao;
    printf("%c", c);
}

int main () {
   int scan,contador_crescente,contador_decrescente;
   char X;
   scanf("%d %c",&scan,&X);
   while (scan>0) {
     contador_crescente = 0;
     contador_decrescente = (scan*2)-1;
       while (-1< contador_decrescente) {
         print_char (contador_crescente,' ');
         print_char (contador_decrescente,X);
         printf("\n");
         contador_crescente ++;
         contador_decrescente-=2;
       }
    scanf("%d %c",&scan,&X);
   }
return 0;
}
