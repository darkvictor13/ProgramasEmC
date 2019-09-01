#include "bibliotecas.h"

int main () {
  char string[101],referencia[101];
  int i,contador;
  scanf("%d ", &i);
  gets (referencia);
  for (; i > 0; i--) {
    gets (string);
    contador = conta_varios_char (referencia,string);
    printf("%d\n", contador);
  }
  return 0;
}
