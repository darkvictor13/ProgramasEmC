#include <stdio.h>

void preenche_vet (int v[],int x) {
  int i,num;
  for (i = 0,num = 1; i < x; i++,num ++) {
    v[i] = num;
  }
}

void printando (int v[],int x) {
  int i;
  for (i = 0; i < x; i++) {
    if (i == x-1) {
      printf("%d\n", v[i]);
    }else {
        printf("%d ", v[i]);
    }
  }
}

int main () {
  int n,v[10000];
  while (1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    preenche_vet (v,n);
    printando (v,n);
  }
  return 0;
}
