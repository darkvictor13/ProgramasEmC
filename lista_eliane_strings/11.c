#include "bibliotecas.h"

int main() {
  char str_entrada[101],str_parametro[51],str_excluido[101];
  int i;
  scanf("%d ", &i);
  gets (str_parametro);
  for (; i > 0; i--) {
    gets (str_entrada);
    se_aparece_na_string_exclua (str_parametro,str_excluido,str_entrada);
    printf("[%s]\n", str_excluido);
  }
  return 0;
}
