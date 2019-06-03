#include <stdio.h>

void roubo_estatal (double a){
  double parte_8,parte_18;
  if (a<=2000)
  printf("Isento\n");
  if (a>2000 && a<=3000) {
    a -=2000;
    printf("R$ %.02lf\n",a * .08);
  }else if (a>3000 && a<=4500){
    // 1000 * .08 = 80 entao td mundo q tiver renda maior que 3000 vai pagar no minimo 80R$
    a -= 3000;
    printf("R$ %.02lf\n",80+a*.18);
  }else if (a>4500){
    // o minimo q alguem paga aki e 80 + 1500*.18 == 270 | 80+270 == 350
    a -= 4500;
    printf("R$ %.02lf\n",350+a*.28);
  };}

int main () {
  double x;
  scanf("%lf",&x);
  roubo_estatal (x);
  return 0;
}
