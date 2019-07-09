#include <stdio.h>

void sequencia () {
  int i,j;
  for (i = 1,j = 7; i <= 9; i += 2,j--) {
    while (j > 5) {
      printf("I=%d J=%d\n",i,j);
      j--;
    }
    printf("I=%d J=%d\n",i,j);
    if (j <= 5) {
      j += 3;
    }
  }
}

int main () {
  sequencia ();
  return 0;
}
