#include <stdio.h>

void preencher_vetor( int vx[], int *n ) {
  int i;
  scanf("%d", n);
  for ( i = 0; i < *n; i++) {
    scanf("%d", &vx[i]);
  }
}

void print_vetor( int vx[], int n){
  int i;
  for ( i = 0; i < n; i++) {
    printf("%d", vx[i]);
  }
}

int main(){
  int v[100];
  int n;
  preencher_vetor(v,&n );
  print_vetor(v,n);
  //ordenar_menor_maior()
  return 0;
}
