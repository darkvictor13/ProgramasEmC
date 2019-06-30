#include <stdio.h>

int soma_dig (int n) {
  int soma = 0, aux = 0;
  for (int i = 10 ;i * 10 < n;i*=10) {
    soma += (n % i) - n % (i/10);
  }
  return soma;
}

int main () {
  int teste;
  scanf("%d", &teste);
  printf("%d\n", soma_dig (teste));
  return 0;
}
