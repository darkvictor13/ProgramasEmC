#include "bibliotecas.h"

int main () {
  char str[5] = {"01234"},*p;
  p = str;
  for (; *str; str++) {
    ;
  }
  printf("%ld", str-p);
}
