#include <stdio.h>

void loop (int *tamanho_loop) {
  scanf("%d", tamanho_loop);
}

int eh_primo (int n) {
  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

void printa_bonitinhu (int n) {
  if (eh_primo (n) == 1) {
    printf("%d eh primo\n", n);
  }else {
    printf("%d nao eh primo\n", n);
  }
}

int main () {
  int num,quantos_casos;
  loop (&quantos_casos);
  for (; quantos_casos > 0; quantos_casos --) {
    scanf("%d", &num);
    printa_bonitinhu (num);
  }
  return 0;
}
