#include "bibliotecas.h"

int indice_do_espaco_em_branco (char str[]) {
  for (int i = 0; 1; i++) {
    if (str[i] == ' ') {
      return i;
    }
  }
}

void resolvendo_o17 (char *destino,char *origem) {
  int aux = indice_do_espaco_em_branco (origem);
  for(; *origem; origem++) {

  }
}
