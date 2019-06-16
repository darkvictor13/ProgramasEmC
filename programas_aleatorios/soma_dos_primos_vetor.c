#include <stdio.h>

int eh_primos (int n) {
  int i;
  i=2;

  if (n == 0 || n == 1){
  return 0;
  }

  while (i<n) {
   if (n%i == 0) {
     return 0;
   }
   i++;
 }
 return 1;
}

void preencher_vetor(int n,int v[]) {
  int x,i;
  for (x = 0,i = 0; n > x; i++) {
    if(eh_primos (i) == 1){
      v[x] = i;
      x++;
    }
  }
}

void print_vetor (int n,int v[]){
  for (int i = 0; i < n; i++) {
    printf("[%d] ", v[i]);
  }
  printf("\n");
}

int soma_de_vetor (int v[],int n){
  int i,soma = 0;
  for (i = 0; i < n; i++) {
      soma += v[i];
  }
  return soma;
}

int main () {
  int v[100],n;
  scanf("%d",&n);
  while (n>0){
  preencher_vetor (n,v);
  print_vetor (n,v);
  printf("A soma dos primos = %d\n",soma_de_vetor (v,n));
  scanf("%d",&n);
}
  return 0;
}
