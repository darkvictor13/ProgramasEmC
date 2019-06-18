#include <stdio.h> // t3 = t1 + t2 == formula de fibonacci;

void mudar_n (int *n){
    scanf("%d",n);
}

int calculo_fibonacci (int v[],int n){
  int i;
  v[0] = 1;
  v[1] = 1;
  for (i = 2;i < n; i++){
    v[i] = v[i-1] + v[i-2];
}
}

void apresentar_vetor_fibonacci (int v[],int n) {
  for (int i = 0;i < n; i++){
    printf("%d ",v[i]);
  }
  printf("\n");
}

int main () {
  int n,v[47];
  mudar_n (&n);
    while (n>0){
    calculo_fibonacci (v,n);
    apresentar_vetor_fibonacci (v,n);
    mudar_n (&n);
 }
return 0;
}
