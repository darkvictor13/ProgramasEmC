#include <stdio.h>

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

int soma_dos_dias (int d,int m,int a) {
  int dias_corridos = 0;
  for (int i = 1; i < m; i++) {
    dias_corridos += dia_do_mes (i,a);
  }
  return dias_corridos + d;
}

int main () {
  int dia,mes,ano;
  scanf("%d %d %d",&dia,&mes,&ano);
  while (dia > 0) {
    printf("%d\n", dias_do_ano(ano) - soma_dos_dias (dia,mes,ano));
    scanf("%d %d %d",&dia,&mes,&ano);
  }

}
