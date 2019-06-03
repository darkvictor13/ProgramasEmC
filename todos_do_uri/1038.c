#include <math.h>
#include <stdio.h>

float calculo_total (int tipo ,int qtd) {
  if (tipo == 1)
    return (qtd * 4);
  else
    if (tipo == 2)
      return (qtd * 4.50);
    else
      if (tipo == 3)
       return (qtd * 5);
      else
       if (tipo == 4)
        return (qtd * 2);
       else
         if (tipo == 5)
          return (qtd * 1.50);
  }
int main () {
  int x,y;
  scanf("%d %d",&x,&y);
  printf("Total: R$ %.2f\n",calculo_total(x,y));
  return 0;
}
