#include "bibliotecas.h"

void adiciona_a_referencia (char *ref,char *dest,char *org) {
  int c = 0;char *aux = ref;
  for(; *org; org++,dest++) {
    if (*org == '>') {
      for (; *ref; ref++,dest++) {
        *dest = *ref;
      }
      ref = aux;
      c++;
    }
    *dest = *org;
  }
  if (c == 0) {
    for (; *ref; ref++,dest++) {
      *dest = *ref;
    }
  }
}

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
