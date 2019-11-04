#include <stdio.h>

int achaONumDeDigitos(int n) {
  int divisor = 1,count = 0;

  while (n / divisor) {
    divisor *= 10;
    count ++;
  }
  return count;
}

void criaMat(int m[][15],int t) {
  int i,j;

  m[0][0] = 1;
  for (j = 1; j < t; j++) {
    m[0][j] = (m[0][j - 1] * 2);
  }

  for(i = 1; i < t; i++) {
    m[i][0] = (m[i - 1][0] * 2);
    for (j = 1; j < t; j++){
      m[i][j] = (m[i][j - 1] * 2);
    }
  }
}

void printMat(int m[][15],int t) {
  int i,j,aux;
  
  aux = achaONumDeDigitos(m[t-1][t-1]);

  for (i = 0; i < t; i++) {
    for (j = 0; j < t - 1; j++) {
      printf("%d ",m[i][j]);
    }
    printf("%d\n",m[i][j]);
  }
  printf("\n");
}


int main () {
  int m[15][15],tam;

  scanf("%d",&tam);

  while (tam) {
    criaMat(m,tam);
    printMat(m,tam);
    scanf("%d",&tam);
  }

  return 0;
}