#include "bibliotecas.h"

char * acha_o_maior (char *str) {
  maior = str;
  for (str += 1; *str; str++) {
    if (*str > *maior) {
      maior = str;
    }
  }
  return maior;
}

void ordem_decrescente (char *dest,char *org) {
  char aux;
  for (; *org; org++,dest++) {
    dest = acha_o_maior (org);
  }
}

int main () {
  char str_entrada[101],str_aux[101],str_saida[101];
  while (strcmp (gets (str_entrada),"fim")) {
    ordem_decrescente (str_saida,str_entrada);
    printf("%s\n", str_saida);
  }
  return 0;
}
