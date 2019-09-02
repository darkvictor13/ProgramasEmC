#include "bibliotecas.h"

int main () {
  char str[101],resposta[101];
  int casos;
  for (scanf("%d ", &casos); casos > 0; casos--) {
    gets (str);
    elimina_repedidas_em_sequencia (resposta,str);
    printf("[%s]\n", resposta);
  }
}
