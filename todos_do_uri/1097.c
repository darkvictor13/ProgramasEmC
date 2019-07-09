#include <stdio.h>

void sequencia () {
  int i,j,count = 0;
  for (i = 1,j = 7; i <= 9; i += 2,j--) {
    while (count <= 2) {
      printf("I=%d J=%d\n",i,j);
      j--;
      count++;
    }
    j += 6;
    count = 0;
  }
}

int main () {
  sequencia ();
  return 0;
}
