#include <stdio.h>
#include <math.h>

int retorna_dezenas (int n) {
  int i = 0;
  while (n > 0) {
    i++;
    n /= 10;
  }
  return i;
}

int Super_Next (int n,int num_dez) {
  int i = 0,aux, soma = 0;
  while (i < num_dez) {
    aux = n % 10;
    if (aux == 9) {
      aux = -1;
    }
    if (aux != 9){
      aux += 1;
    }
    soma += aux * pow (10,i);
    i++;
    n /= 10;
  }
  return soma;
}

int main () {
  int n = 0,dezenas,aux;
  while (n != -1) {
    scanf("%d", &n);
    dezenas = retorna_dezenas (n);
    aux = Super_Next (n,dezenas);
    printf("%d\n", aux);
  }
  return 0;
}
