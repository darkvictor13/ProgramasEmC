#include "bibliotecas.h"

int main () {
  char entrada[101],string_um_p_tras[101];
  int casos;
  for (scanf("%d ", &casos); casos > 0; casos--) {
    gets (entrada);
    um_pra_tras(string_um_p_tras,entrada);
    printf("--------------------\n");
    printf("[%s]\n", string_um_p_tras );
  }
  return 0;
}
