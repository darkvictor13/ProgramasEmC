#include <stdio.h>

void preencher_vetor (int v[],int n,int x){
  if (n != -1)
    v[x] = n;
}

void print_vetor (int v[],int x){
  int aux = x;
  for (int i = 0; i <= x; i++) {
    printf("%d",v[aux]);
    aux--;
  }

}

int main () {
  int v[100],n,x,tamanho_do_vetor;
  x = 0;
  scanf("%d",&n);
  while (n>=0) {
    preencher_vetor (v,n,x);
    x++;
    scanf("%d",&n);
  }
  print_vetor (v,x);
  return 0;
}/*
int soma,n,aux;
soma = 0; aux = 1;
scanf("%d",&n);
while (n>=0) {
  soma += (n*aux);
  aux *= 10;
  scanf("%d",&n);
}
printf("%d\n",soma );
return 0;
}*/
