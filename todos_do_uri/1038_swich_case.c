#include <math.h>
#include <stdio.h>

float calculo_total (int tipo ,int qtd) {
  switch (tipo) {
    case 1: return (qtd * 4);
             break;
    case 2: return (qtd * 4.50);
             break;
    case 3: return (qtd * 5);
            break;
    case 4: return (qtd * 2);
            break;
    case 5: return (qtd * 1.5);
            break;
    default: return 0;
  }
  }
int main () {
  int x,y;
  scanf("%d %d",&x,&y);
  printf("Total: R$ %.2f\n",calculo_total(x,y));
  return 0;
}
