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

int encaixa (int a,int b,int dez) {
  int divisor,num_q_encaixa;
  divisor = pow (10,dez);
  num_q_encaixa = a % divisor;
  if (num_q_encaixa == b) {
    return 1;
  }else return 0;
}

void printa_bonito (int n) {
  if (n == 1) {
    printf("encaixa\n");
  }else printf("não encaixa\n");
}

int main () {
  int num1,num2,dezenas_n2,quantos_casos,aux;
  scanf("%d", &quantos_casos);
  for (; quantos_casos > 0; quantos_casos++) {
    scanf("%d %d", &num1,&num2);
    dezenas_n2 = retorna_dezenas(num2);
    aux = encaixa (num1,num2,dezenas_n2);
    printa_bonito (aux);
  }
  return 0;
}
