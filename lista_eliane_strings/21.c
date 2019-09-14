#include "bibliotecas.h"

void tira_espcao_em_branco_do_inicio(char *destino,char *origem) {
  for (;*origem == ' '; origem++)
    ;
  //copystr_o_mais_eficiente (destino,origem);
  for (; *origem; origem++,destino++) {
    *destino = *origem;
  }
  *destino = 0; 
}

int main () {
  char entrada[101],resposta[101];
  while (!strings_sao_iguais(entrada,"fim")) {
    gets (entrada);
    tira_espcao_em_branco_do_inicio (resposta,entrada);
    printf("[%s]\n", resposta);
  }
}
