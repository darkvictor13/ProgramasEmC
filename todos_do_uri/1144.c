#include <stdio.h>

void sequencia_zoada (int quantas_vezes) {
  int num,aux1,aux2,aux3,i;
  num = 1;

  for (i = 0; i < quantas_vezes; i++,num++) {
    aux1 = num;
    aux2 = (num * num);
    aux3 = (num * num * num);
    printf("%d %d %d\n", aux1,aux2,aux3);
    aux2 ++;
    aux3 ++;
    printf("%d %d %d\n", aux1,aux2,aux3);
  }
}

int main () {
  int N;
  scanf("%d", &N);
  sequencia_zoada (N);
  return 0;
}
