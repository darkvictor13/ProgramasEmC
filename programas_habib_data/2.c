#include <stdio.h> // 0 = falso && 1 = vdd;

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

int date_valid (int dia,int m,int ano) {
  if (dia > 31) {
    return 0;
  }if (m > 12) {
    return 0;
  }if (m == 2){
    if (dias_do_ano (ano) == 366) {
      if (dia >= 29) {
        return 1;
      }
    }else if (dias_do_ano (ano) == 365) {
            if (dia >= 29) {
              return 1;
            }
    }
  }
  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
    if (dia <= 31) {
      return 1;
      }
    }else if  (m == 4 || m == 6 || m == 9 || m == 11) {
      if (dia < 31) {
        return 1;
      }
    }
  }

int main () {
  int numero_de_datas,dia,mes,ano;
  leitura (&numero_de_datas);
  leitura (&dia);leitura (&mes);leitura(&ano);
  for (int i = 0; i < numero_de_datas; i++) {
    if (date_valid (dia,mes,ano) == 1)
      printf("valida\n");
    else printf("nao valida\n");
    leitura (&dia);leitura (&mes);leitura(&ano);
  }
  return 0;
}
