#include <stdio.h>

void leitura (int *s){
  scanf("%d",s);
}

int dias_do_ano (int n) {
  if (n%4 == 0) {
    if (n%100 != 0 || n%400 == 0) {
      return 366;
    }else return 365;
  }else return 365;
}

int dia_do_mes (int m,int ano) {
  if (m > 12)
    return 0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;

   if  (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;

  if (m == 2){
    if (dias_do_ano(ano) == 366)
      return 29;
    if (dias_do_ano(ano) == 365)
      return 28;

  }
  return 0;
}

int main () {
  int mes,ano;
  leitura (&mes);leitura(&ano);
  while (mes>0) {
    printf("%d\n",dia_do_mes(mes,ano));
    leitura (&mes);leitura(&ano);
  }
  return 0;
}
