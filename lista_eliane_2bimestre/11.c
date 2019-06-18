#include <stdio.h>// A=0/B=1/C=2/D=3/E=4/F=5/G=6/H=7/I=8/J=9

int inv_num (int n) {
  int aux = 0;
  while (n>0){
    aux = aux * 10 +n%10;
    n /= 10;
  }
  return aux;
}

void criptografia (int x) {
  int y = inv_num (x);
  while (y>0) {
    printf("%c",'A'+y%10);
    y /= 10;
  }
}

int main () {
  int n;
  scanf("%d",&n);
  while (n>-1) {
    criptografia (n);
    printf("\n");
    scanf("%d",&n);
  }
  return 0;
}
