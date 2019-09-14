#include <stdio.h>

int main () {
  char str[100];
  gets (str);
  for (; *str; str++) {
    printf("%d\n", 1);
  }
  return 0;
}
