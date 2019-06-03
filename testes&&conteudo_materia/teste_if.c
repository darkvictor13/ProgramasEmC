#include <math.h>
#include <stdio.h>
void funcao_bhaskara (double A, double B, double C, double * x1, double * x2) {
  double delta;
  delta = pow(B,2)-(4*A*C);
  if (delta < 0 || A == 0){
    printf("Impossivel calcular\n"); break;
  }else{
    *x1 = (-B + sqrt(delta))/(2*A);
    *x2 = (-B - sqrt(delta))/(2*A);
}
}

 int main () {
   double a, b, c, delta, p1, p2;
   scanf("%lf %lf %lf",&a,&b,&c);
   funcao_bhaskara (a,b,c,&p1,&p2);
   printf("Raizes da equacao\n x1 = %lf\n x2 = %lf\n",p1,p2);
   return 0;
 }
