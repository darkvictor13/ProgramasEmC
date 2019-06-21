#include <stdio.h>// 01 01 1600 ate a data = resposta em dias_do_ano

int ano_eh_bissexto (int n) {
  if (n%4 == 0) {
    if (n%100 != 0 || n%400 == 0) {
      return 366;
    }else return 365;
  }else return 365;
}

int dias_corridos_dos_anos (int a) {
  int result = 0;
  for (int i = 1600; i < a; i++) {
    result += ano_eh_bissexto (i);
  }
  return result;
}

int dia_do_mes (int m,int ano) {
  if (m > 12)
    return 0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;

   if  (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;

  if (m == 2){
    if (ano_eh_bissexto(ano) == 366)
      return 29;
    if (ano_eh_bissexto(ano) == 365)
      return 28;

  }
  return 0;
}

int dias_corridos_ano_final (int d,int m,int a) {
  int result = 0;
  for (int i = 1; i < m ; i++) {
      result += dia_do_mes (i,a);
    }
    return result + d;
  }

int main () {
  int ano,mes,dia,result;
  scanf("%d %d %d",&dia,&mes,&ano);
  while (dia <= 31 || mes <= 12 || ano >= 1600) {
    result = dias_corridos_dos_anos (ano) + dias_corridos_ano_final (dia,mes,ano);
    printf("%d\n",result);
    scanf("%d %d %d",&dia,&mes,&ano);

  }
  return 0;
}
