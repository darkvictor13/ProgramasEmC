#include <stdio.h>
#include <math.h>
int main () {
  float x,exp_meu;
  scanf("%f",&x);
  printf("exp_meu (%.2f) = %f\n",x, 1 + x + (pow(x,2))/(2*1)+(pow(x,3))/(3*2*1)+(pow(x,4))/(4*3*2*1)+pow(x,5)/(5*4*3*2*1));
  printf("exp_lib (%.2f) = %f\n",x,exp (x) );
}
