#include <stdio.h>

#define jusisvaldison scanf

#define ever 1

int main () {
  int x = 1;
  jusisvaldison ("%d",&x);
  printf("%d\n", x);
  for (; ever; x++) {
    printf("oi\n");
    if (x == 60) {
      break;
    }
  }
  return 0;
}
