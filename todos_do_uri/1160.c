#include <stdio.h>

void loop (int *tamanho_loop) {
  scanf("%d", tamanho_loop);
}

int pop_apos_ano (int tot_pop,float tax) {
  int a;
  a = (tot_pop * (tax/100));
  return a + tot_pop;
}

int resposta (int popA,int popB,float taxaA,float taxaB) {
  int resp = 0;
  while (popA <= popB) {
    popA = pop_apos_ano (popA,taxaA);
    popB = pop_apos_ano (popB,taxaB);
    resp ++;
  }
  return resp;
}

int main () {
  int populacao_A,populacao_B,i,aux;float cresA,cresB;
  int a = 1000;float b = 1;
  pop_apos_ano (a,b);
  loop (&i);
  for (; i > 0; i--) {
    scanf("%d %d %f %f",&populacao_A,&populacao_B,&cresA,&cresB);
    aux = resposta (populacao_A,populacao_B,cresA,cresB);
    if (aux > 100) {
      printf("Mais de 1 seculo.\n");
    }else {
        printf("%d anos.\n", aux);
    }
  }
  return 0;
}
