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

void dias_corridos_em_data (int d,int a,int * data_certa_mes,int * data_certa_dia) {
  int soma = 0;int i = 1;
  for (; soma < d; i++) {
    soma += dia_do_mes (i,a);
  }
  *data_certa_mes = i-1; *data_certa_dia = d + dia_do_mes (i-1,a) - soma;
}



int main () {
  int dia_base,ano_base,dias_corridos,dia_certo,mes_certo,ano_certo;
  scanf("%d %d",&dia_base,&ano_base);
  scanf("%d %d",&dias_corridos,&ano_certo);
  while (dias_corridos >= 1) {
    dias_corridos_em_data (dias_corridos,ano_certo,&mes_certo,&dia_certo);
    printf("%d %d %d\n",dia_certo,mes_certo,ano_certo);
    scanf("%d %d",&dias_corridos,&ano_certo);
  }
  return 0;
}
