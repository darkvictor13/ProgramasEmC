#include "bibliotecas.h"

int main () {
  char str1 [101],str2[101];
  scanf("%[^\n]%*c", str1);
  //fflush (stdin);
  printf("[%s]\n", str1);
  copystr_o_mais_eficiente (str2,str1);
  printf("[%s]\n", str2);
  return 0;
}
