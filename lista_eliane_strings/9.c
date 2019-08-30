#include "bibliotecas.h"

int conta_varios_char (char *parametro,char *str) {
  int count = 0;char *aux = parametro;
  for (; *str; str++) {
    for (parametro = aux; *parametro; parametro++) {
      if (*str == *parametro) {
        count++;
        break;
      }
    }
  }
  return count;
}

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
