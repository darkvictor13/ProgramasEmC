#include <stdio.h>

void swap (int * a,int * b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int preencher_vetor_impares (int vx[],int n1,int n2){
  int i,count_de_impares;
  count_de_impares = 0;
  for (i = n1+1; i < n2; i++) {
    if (i%2 != 0){
      vx[count_de_impares] = i;
      count_de_impares ++;
      }
  }
  return count_de_impares;
}

int soma_impares (int vx[],int numero_de_loop){
  int i,soma = 0;
  for (i = 0; i < numero_de_loop; i++) {
      soma += vx[i];
  }
  return soma;
}

int main () {
  int v[100000],x,n1,n2;
  scanf("%d %d",&n1,&n2);
  if (n2<n1){
    swap (&n1,&n2);
  }
  x = preencher_vetor_impares (v,n1,n2);
  printf("%d\n",soma_impares (v,x));
  return 0;
}
