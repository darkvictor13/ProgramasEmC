#include <stdio.h>

#define maxc 100
#define maxl 100


void preenche_matriz (int m[][maxc],int t) {
  int i,j;

  for (i = 0; i < t; i++) {
    for (j = 0; j < t; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}


int SomaDiagPrincp (int m[][maxc],int n) {
  int i,j,soma;
  
  /*for (i = soma = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j) soma += m[i][j];
    }   
  }*/

  for (i = soma = 0; i < n; i++)
  {
    soma += m[i][i];
  }
  
  return soma;
}

int main () {
  int matriz[maxl][maxc],tamanho,soma_diagonal_principal;

  scanf ("%d",&tamanho);

  while (tamanho > 0)
  {
    preenche_matriz (matriz,tamanho);
    soma_diagonal_principal = SomaDiagPrincp (matriz,tamanho);
    printf ("soma da diagonal principal = %d\n",soma_diagonal_principal);
    scanf ("%d",&tamanho);
  }
  return 0;
}