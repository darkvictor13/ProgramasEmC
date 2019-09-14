#include "bibliotecas.h"

int main () {
  char str[101],referencia[51],str_aux[101];
  gets (referencia);
  while (!strings_sao_iguais(str,"fim")) {
    gets (str);
    adiciona_a_referencia (referencia,str_aux,str);
    printf("[%s]\n", str_aux);
  }
  return 0;
}
