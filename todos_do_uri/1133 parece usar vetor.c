#include <stdio.h>

void ordenar (int * a1,int * a2) {
  int aux;
  if (*a2 < *a1) {
    aux = *a2;
    *a2 = *a1;
    *a1 = aux;
  }
}

int forma_vetor (int v[],int n1,int n2) {
  int i,x = 0;
  ordenar (&n1,&n2);
  for (i = n1 + 1; i < n2; i++) {
    if (i % 5 == 2 || i % 5 == 3) {
      v[x] = i;
      x++;
    }
  }
  return x;
}

void print_vet (int v[],int count) {
  int i;
  for (i = 0; i < count; i++) {
    printf("%d\n",v[i]);
  }
}

int main () {
  int n1,n2,aux,v[10000];
  scanf("%d %d",&n1,&n2);
  aux = forma_vetor (v,n1,n2);
  print_vet (v,aux);
  return 0;
}
