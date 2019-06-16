#include <stdio.h>

void preencher_vetor(double v[],double n1,double n2,double n3,double n4,double n5,double n6){
  v[0] = n1;
  v[1] = n2;
  v[2] = n3;
  v[3] = n4;
  v[4] = n5;
  v[5] = n6;
}

int resposta (double v[]){
  int i,numero_de_positivos;
  numero_de_positivos = 0;
  for (i = 0; i < 6; i++) {
    if (v[i] > 0) {
      numero_de_positivos ++;
    }
  }
  return numero_de_positivos;
}

int main () {
  double v[6],n1,n2,n3,n4,n5,n6;
  scanf("%lf %lf %lf %lf %lf %lf",&n1,&n2,&n3,&n4,&n5,&n6);
  preencher_vetor (v,n1,n2,n3,n4,n5,n6);
  printf("%d valores positivos\n",resposta(v));
  return 0;
}
