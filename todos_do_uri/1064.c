#include <stdio.h>

void tot_positivos (int * quantos_positivos,float * total) {
  float num;int i;
  for (i = 1; i <= 6; i++) {
		scanf("%f", &num);
		if (num > 0) {
			*quantos_positivos += 1;
			*total += num;
		}
}
}


int main(){
	int quantos_positivos = 0,i;float num,media,total = 0;
  for (i = 1; i <= 6; i++) {
		scanf("%f", &num);
		if (num > 0) {
			quantos_positivos += 1;
			total += num;
    }
  }
	media = total / quantos_positivos;
	printf("%d valores positivos\n%.1f\n", quantos_positivos,media);
}
