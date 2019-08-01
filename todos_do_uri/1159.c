#include <stdio.h>

int soma_5pares (int num) {
  int i,j,soma = 0;
  for (j = 0, i = num; j < 5; i++) {
    if (i % 2 == 0) {
      soma += i;
      j++;
    }
  }
  return soma;
}

int main () {
  int n;
  while (1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    printf("%d\n", soma_5pares(n) );
  }
  return 0;
}
