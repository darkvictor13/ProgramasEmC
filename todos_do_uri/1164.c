#include <stdio.h>

int eh_perfeito (int n) {
  int i,soma = 0;
  for (i = 1; i < n; i++) {
    if (n % i == 0) {
      soma += i;
    }
  }
  if (soma == n) {
    return 1;
  }else return 0;
}

void verificacao_num (int n) {
  if (eh_perfeito (n) == 0) {
    printf("%d nao eh perfeito\n", n);
  }
  else {
    printf("%d eh perfeito\n", n);
  }
}

void loop (int *tamanho_loop) {
  scanf("%d", tamanho_loop);
}

int main () {
  int n,i;
  loop (&i);
  for (; i > 0; i--) {
    scanf("%d", &n);
    verificacao_num (n);
  }
  return 0;
}
