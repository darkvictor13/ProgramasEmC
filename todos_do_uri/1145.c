#include <stdio.h>

void sequencia_zoada2 (int n1,int n2) {
  int i,j;
  for (i = 1,j = 1; i <= n2; i++,j++) {
    if (j % n1 == 0) {
      printf("%d\n", i);
    }else {
      printf("%d ", i);
    }
  }
}

int main () {
  int number1,number2;
  scanf("%d %d", &number1,&number2);
  sequencia_zoada2 (number1,number2);
  return 0;
}
