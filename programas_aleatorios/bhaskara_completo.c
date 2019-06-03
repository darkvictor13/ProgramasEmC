#include <stdio.h>
#include <math.h>
void bhaskara (double a, double b, double c, double *x1, double *x2, int *code) {
  double delta;
   if (a != 0) {
    delta = pow (b,2) -4*a*c;
     if (delta >=0 ){
     *x1 = (-b +sqrt(delta))/(2*a);
     *x2 = (-b -sqrt(delta))/(2*a);
     *code = 0;
   }
     else *code = 2;
  }
  else *code =1;
}
void show (double r1, double r2, int code) {
  if (code == 0){
    printf("r1 = %lf\n",r1);
    printf("r2 = %lf\n",r2);
  }
  else if (code == 1) printf("Erro : a = 0\n");
       else if (code == 2)
       printf("Erro delta negativo\n");
         else printf("Erro desconhecido\n");
}

int main () {
  double a,b,c,p1,p2; int result;
  printf("entre com 3 numeros inteiros\n");
  scanf("%lf %lf %lf",&a,&b,&c);
  bhaskara (a,b,c,&p1,&p2,&result);
  show (p1,p2,result);
  return 0;

}
