#include <stdio.h>
#include <math.h>

int num_ao_cubo (int n) {
  return pow (n,3);
}

void vetor_resposta (int v[],int cubo,int n) {
  int i,j,aux = ((int)n / 2);
  if (n % 2 == 1) {
    for (i = 0,j = 0; i < n; i++,j += 2) {
      v[i] = (n * n) - (2 * aux) +j;
    }
  }
  if (n % 2 == 0) {
    for (i = 0,j = 1; i < n; i++,j += 2) {
      v[i] = (n * n) - (2 * aux) +j;
    }
  }
}

void printa_vet (int v[],int count) {
  printf("%d^3 = ", count);
  for (int i = 0; i < count; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main () {
  int num,num3,casos,v[10];
  scanf("%d", &casos);
  for (; casos > 0; casos--) {
    scanf("%d", &num);
    num3 = num_ao_cubo (num);
    vetor_resposta (v,num3,num);
    printa_vet (v,num);
  }
}
