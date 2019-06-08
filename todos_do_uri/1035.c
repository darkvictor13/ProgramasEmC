#include <stdio.h>

int valido_ou_n (int a,int b,int c,int d){
  if (b>c){
    if ((a<d)) {
      if (c+d > a+b) {
        if (c > 0 && d > 0) {
          if (a%2 == 0){

            return 1;

          }else return 0;
        }else return 0;
      }else return 0;
    }else return 0;
  }else return 0;
}

int main() {
  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);
  if (valido_ou_n(A,B,C,D) == 1) {
    printf("Valores aceitos\n");
  } else {
    if (valido_ou_n(A,B,C,D) == 0) {
      printf("Valores nao aceitos\n");
    }
  }
  return 0;
}
