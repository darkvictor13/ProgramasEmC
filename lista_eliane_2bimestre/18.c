#include <stdio.h>
#include <math.h>

float resposta (float n1,float n2,char x) {
  if (x == '+') {
    return n1 + n2;
  }if (x == '-') {
    return n1 - n2;
  }if (x == '*') {
    return n1 * n2;
  }if (x == '/') {
    return n1 / n2;
  }if (x == '^') {
    return pow (n1,n2);
  }
}

void printa_bonitinhu (float n) {
  if (n - (int) n == 0) {
    printf("%d\n",(int)n);
  }
  if (n - (int) n != 0) {
    printf("%.1f\n", n);
  }
}


int main () {
  float num1,num2,aux;int i;char c;
  scanf ("%d",&i);
  for (; i > 0; i--) {
    scanf("%f %c %f", &num1,&c,&num2);
    aux = resposta (num1,num2,c);
    printa_bonitinhu (aux);
  }
  return 0;
}
