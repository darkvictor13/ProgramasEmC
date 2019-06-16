#include <stdio.h>

void tempo_de_jogo (int a,int b,int c,int d) {
	int total_min, total_horas;
	total_horas = c-a;
	total_min = d-b;

	if (total_horas < 0){
	  total_horas += 24;
	}if (total_min < 0){
	  total_min += 60;total_horas -= 1;
  }if (total_min == 0 && total_horas == 0){
    total_horas += 24;
	}if (total_horas > 24){
		total_horas -= 24;
	}if (total_min > 60){
    total_min -= 60; total_horas +1;
	}
	printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_horas,total_min);
}

int main () {
	int hi,hf,mi,mf;
	scanf ("%d %d %d %d",&hi,&mi,&hf,&mf);
	tempo_de_jogo (hi,mi,hf,mf);
	return 0;
}
