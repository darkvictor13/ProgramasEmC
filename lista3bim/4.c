#include <stdio.h>

#define max_tam 70

void DiagPrincpESecundaria (int m[][max_tam],int t) {
  int i,j,diag_sec = (t-1);

  for (i = 0; i < t; i++,diag_sec--) {
    for (j = 0; j < t; j++) {
      m[i][j] = 3;
    }
    m[i][i] = 1;
    m[i][diag_sec] = 2;
  }
}

void printa_matriz (int m[][max_tam],int t) {
  int i,j;

  for (i = 0; i < t; i++) {
    for (j = 0; j < t; j++) {
      printf ("%d ",m[i][j]);
    }
    printf ("\n");
  }
}

int main () {
  int m[max_tam][max_tam],tam;

  scanf("%d",&tam);
  
  while (tam > 0) {
    DiagPrincpESecundaria (m,tam);
    printa_matriz (m,tam);
    scanf("%d",&tam);
  }

  return 0;
}
