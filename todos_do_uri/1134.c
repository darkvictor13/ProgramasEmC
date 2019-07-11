#include <stdio.h>

int preenche_vet (int v[]) {
  int i,n;
  for (i = 0; n != 4; i++) {
    scanf("%d", &n);
    v[i] = n;
  }
  return i;
}

void resposta (int v[],int i,int *a,int *g,int *d) {
  int j;
  for (j = 0; j <= i; j++) {
    if (v[j] == 1) {
      *a = *a + 1;
    }
    if (v[j] == 2) {
      *g = *g + 1;
    }
    if (v[j] == 3) {
      *d = *d + 1;
    }
  }
}

void print_resp (int c1,int c2,int c3) {
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", c1);
  printf("Gasolina: %d\n", c2);
  printf("Diesel: %d\n", c3);
}

int main () {
  int count_A = 0,count_G = 0,count_D = 0,v[10000],aux;
  aux = preenche_vet (v);
  resposta (v,aux,&count_A,&count_G,&count_D);
  print_resp (count_A,count_G,count_D);
  return 0;
}
