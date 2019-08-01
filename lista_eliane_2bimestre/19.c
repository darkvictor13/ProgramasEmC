#include <stdio.h>

void troca (int *n1,int *n2) {
  int aux;
  aux = *n1;
  *n1 = *n2;
  *n2 = aux;
}

void coloca_em_ordem (int *n1,int *n2,int *n3) {
  if (*n2 < *n1) {
    troca (n1,n2);
  }if (*n3 < *n2) {
    troca (n2,n3);
  }if (*n1 > *n2) {
    troca (n1,n2);
  }//if (*n1 > *n3) {
    //troca (n1,n3);
  //}
}

int main () {
  int a,b,c;
  while (1) {
    scanf("%d %d %d", &a,&b,&c);
    if (a < b && b < c) {
      break;
    }
    coloca_em_ordem (&a,&b,&c);
    printf("%d %d %d\n", a,b,c);
  }
  return 0;
}
