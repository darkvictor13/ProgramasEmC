#include "bibliotecas.h"

int main () {
  char entrada[101],string_um_p_frente[101];
  int casos;
  scanf("%d ", &casos);
  for (; casos > 0; casos--) {
    gets (entrada);
    um_pra_frentev2 (entrada,string_um_p_frente);
    puts (string_um_p_frente);
  }
  return 0;
}
