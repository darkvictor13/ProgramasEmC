#include <stdio.h>
int main () {
  int var,mes_com_29,mes_com_31,mes_com_30,fevereiro,mes,ano,multiplo_de_4,multiplo_de_100,multiplo_de_400,bissexto;
  scanf("%d%d",&mes, &ano );
    multiplo_de_4 = (ano%4)==0?1:0;
    multiplo_de_100 = (ano%100)==0?1:0;
    multiplo_de_400 = (ano%400)==0?1:0;
    var = multiplo_de_4 && !multiplo_de_100;
    bissexto = var || multiplo_de_400;
    mes_com_31 = mes == (1,3,5,7,8,10,12)?1:0;
    mes_com_30 = mes == (4,6,9,11)?1:0;
    fevereiro = mes == 2?1:0;
    mes_com_29 = fevereiro && bissexto;
    mes_com_31 == 1?printf("31\n"):0;
    mes_com_30 == 1?printf("30\n"):0;
    mes_com_29 == 1?printf("29\n"):printf("28\n");
    return 0;

}


//enunciado : queremos saber quantos dias foram percorridos naquele ano
// todos os multiplos de 4 - multiplos de 100 + multiplos de 400
