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

int anos_corridos (int dias_corridos,int a_inicial,int *a_final){
  *a_final = a_inicial;
  while (dias_corridos > ano_eh_bissexto(*a_final)) {
      dias_corridos -= ano_eh_bissexto(a_inicial);
      *a_final ++;
    }
    printf("%d\n",dias_corridos);
    return dias_corridos;
  }

void result (int diasC,int a1,int a_resu,int *m_resu,int *d_resu) {
  int dias_se_passaram_ultimo_ano,soma = 0,i = 1;
  dias_se_passaram_ultimo_ano = anos_corridos (diasC,a1,&a_resu);
  for (; soma < diasC; i++) {
    soma += dia_do_mes (i,a_resu);
  }
  *m_resu = i-1; *d_resu = diasC + dia_do_mes (i-1,a_resu) - soma;
}

int main () {
  int d1,m1,a1,dias_corridos,a2,m2,d2;
  scanf("%d %d %d %d",&d1,&m1,&a1,&dias_corridos);
  while (d1>0) {
    anos_corridos (dias_corridos,a1,&a2);
    result (dias_corridos,a1,a2,&m2,&d2);
    printf("%d %d %d\n",d2,m2,a2);
    scanf("%d %d %d %d",&d1,&m1,&a1,&dias_corridos);
  }
  return 0;
}
