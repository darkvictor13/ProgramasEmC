#include "bibliotecas.h"

int main () {
  char str[101],resposta[101];
  int casos;
  for (scanf("%d ", &casos); casos > 0; casos--) {
    gets (str);
    str_troca_2em2 (resposta,str);
    printf("[%s]\n", resposta);
  }
}
