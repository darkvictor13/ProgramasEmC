#include <stdio.h>

int eh_impar (int n) {
  if (n % 2 == 0) {
    return 0;
  }
  return 1;
}

void loop (int *tamanho_loop) {
  scanf("%d", tamanho_loop);
}

int soma_dos_impares (int n1,int n2) {
  int i,soma = 0,count = n2;
  for (i = n1; count > 0; i++) {
    if (eh_impar (i) == 1) {
      soma += i;
      count --;
    }
  }
  return soma;
}

int main () {
  int num1,num2,quantos_casos,resposta;
  loop (&quantos_casos);
  for (; quantos_casos > 0; quantos_casos--) {
    scanf("%d %d", &num1,&num2);
    resposta = soma_dos_impares (num1,num2);
    printf("%d\n", resposta);
  }
  return 0;
}
