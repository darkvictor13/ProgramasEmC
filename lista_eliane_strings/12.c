#include "bibliotecas.h"

void exclui_str_referencia (char *dest,char *org,char *r) {
  int aux = lenght_v_sem_ser_indexada (r);

  for (; *org; org++) {

  }
}

int main () {
  char str[101],referencia[51],str_aux[101];
  gets (referencia);
  while (!strings_sao_iguais(str,"fim")) {
    gets (str);
    exclui_str_referencia (str_aux,str,referencia);
    printf("[%s]\n", str_aux);
  }
  return 0;
}
