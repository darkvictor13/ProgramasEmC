#include "bibliotecas0.h"

/*int eh_letra (char x) {
  if (x >= 'A' && x <= 'z') {
    return 1;
  }
  return 0;
}*/


int main () {
  char entrada[101],str_aux[101];
  gets(entrada);
  while (!strings_sao_iguais (entrada,"fim")) {
    acha_a_1palavra (str_aux,entrada);
    printf("[%s]\n", str_aux);
    gets(entrada);
  }
  return 0;
}
