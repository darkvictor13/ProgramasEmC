#include <stdio.h>

int bissexto(int ano){
	if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
		return 1;
	}
	return 0;
}

int calcula_dias(int dia, int mes, int ano){
	int aux;
	long int soma = 0;
	for(aux = ano - 1; aux > 0; aux--){
		if(bissexto(aux)){
			soma += 366;
		}
		else{
			soma += 365;
		}
	}
	for(aux = mes - 1; aux > 0; aux--){
		if(aux == 1	|| aux == 3 || aux == 5 || aux == 7 || aux == 8 || aux == 10){
			soma += 31;
		}
		if(aux == 2 && bissexto(ano)){
			soma += 29;
		}
		if(aux == 2 && !bissexto(ano)){
			soma += 28;
		}
		if(aux == 4 || aux == 6 || aux == 9 || aux == 11){
			soma += 30;
		}
	}
	soma += dia;
	return soma;
}

int main(){
	long int soma, data_1, data_2;
	int dia1, mes1, ano1, dia2, mes2, ano2;
	scanf("%d%d%d%d%d%d", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);
	data_1 = calcula_dias(dia2, mes2, ano2);
	data_2 = calcula_dias(dia1, mes1, ano1);
	soma = data_1 - data_2;
	printf("%d", soma);
	return 0;
}
