#include <stdio.h>

int novo_salario (double a){
if (a>0 && a<=400){
  printf("Novo salario: %.02lf\n",a*0.15+a);
  printf("Reajuste ganho: %.02lf\n",a*0.15);
  printf("Em percentual: 15 %\n");
}if (a>=400.01 && a<=800){
  printf("Novo salario: %.02lf\n",a*0.12+a);
  printf("Reajuste ganho: %.02lf\n",a*0.12);
  printf("Em percentual: 12 %\n");
}if (a>=800.01 && a<=1200){
  printf("Novo salario: %.02lf\n",a*0.1+a);
  printf("Reajuste ganho: %.02lf\n",a*0.1);
  printf("Em percentual: 10 %\n");
}if (a>=1200.01 && a<=2000){
  printf("Novo salario: %.02lf\n",a*0.07+a);
  printf("Reajuste ganho: %.02lf\n",a*0.07);
  printf("Em percentual: 7 %\n");
}if (a>2000){
  printf("Novo salario: %.02lf\n",a*0.04+a);
  printf("Reajuste ganho: %.02lf\n",a*0.04);
  printf("Em percentual: 4 %\n");
}
}

int main () {
  double x;
  scanf("%lf",&x);
  novo_salario (x);
  return 0;
}
