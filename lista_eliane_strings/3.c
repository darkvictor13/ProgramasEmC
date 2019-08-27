#include "bibliotecas.h"

int main () {
  int casos,num_entrada,i,j,aux;
  char str[101],char_entrada;
  scanf("%d", &casos);
  for (; casos > 0; casos--) {
    scanf("%d %c", &num_entrada,&char_entrada);
    gera_string (str,char_entrada,num_entrada);
    puts (str);
  }
  return 0;
}
