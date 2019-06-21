#include <stdio.h>

int ano_eh_bissexto (int n) {
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
    if (ano_eh_bissexto(ano) == 366)
      return 29;
    if (ano_eh_bissexto(ano) == 365)
      return 28;

  }
  return 0;
}

int dias_corridos_dos_anos (int a1,int a2) { // dias corridos em cada ano
  int result = 0;
  for (; a1 < a2; a1++) {
    result += ano_eh_bissexto (a1);
  }
  return result;
}

int dias_corridos_ano_final (int d,int m,int a) {
  int result = 0;
  for (int i = 1; i < m ; i++) {
      result += dia_do_mes (i,a);
    }
    return result + d;
  }

int main () {
  int a1,m1,d1,a2,m2,d2,dias_corridos_ano1,dias_corridos_ano2,aux1,aux2,result;
  scanf("%d %d %d %d %d %d",&d1,&m1,&a1,&d2,&m2,&a2);
  while (d1 <= 31 || m1 <= 12 || a1 >= 1600) {
    dias_corridos_ano1 = dias_corridos_ano_final (d1,m1,a1);
    dias_corridos_ano2 = dias_corridos_ano_final (d2,m2,a2);
    aux1 = dias_corridos_ano2 - dias_corridos_ano1;
    aux2 = dias_corridos_dos_anos (a1,a2);
    result = aux1 + aux2;
    printf("%d\n", result);
    scanf("%d %d %d %d %d %d",&d1,&m1,&a1,&d2,&m2,&a2);
    }
  return 0;
}
