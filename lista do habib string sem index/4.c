#include "bibliotecas0.h"

int conta_quantas_vezes_a_string_aparece (char *ref,char *org) {
  for (; *org; org++) {

  }
}

int main () {
  char entrada[101],str_aux[101],resposta;
  gets(entrada);
  while (!strings_sao_iguais (entrada,"fim")) {
    acha_a_1palavra (str_aux,entrada);
    resposta = conta_quantas_vezes_a_string_aparece (str_aux,entrada);
    printf("%d\n", resposta);
    gets(entrada);
  }
  return 0;
}
