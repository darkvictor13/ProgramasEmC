#include <stdio.h>

void eh_tringulo (double A,double B, double C) {
  if (A < B + C && B < A + C && C < A +B) 
     printf("Perimetro = %.1lf\n",A + B + C);
  else printf("Area = %.1lf\n",(((A+B)*C)/2));
}

int main () {
  double x,y,z;
  scanf("%lf %lf %lf",&x,&y,&z);
  eh_tringulo (x,y,z);

  return 0;
}
