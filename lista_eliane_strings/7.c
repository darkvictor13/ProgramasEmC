#include "bibliotecas.h"

int main () {
  char str[101],in;
  int count,casos;
  for (scanf("%d %c ", &casos,&in); casos > 0; casos--) {
    gets (str);
    count = conta_esse_char_especifico (str,in);
    printf("essa letra se repete %d vezes\n", count);
  }
  return 0;
}
