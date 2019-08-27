#include "bibliotecas.h"

int main () {
  int casos,tamanho;
  char str1[101],str2[101];
  scanf("%d ", &casos);
  for (; casos > 0; casos--) {
    gets (str1);
    tamanho = lenght (str1);
    inverte_string (str2,str1,tamanho);
    puts (str2);
  }
  return 0;
}
