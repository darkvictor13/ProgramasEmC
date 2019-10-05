#include <stdio.h>

#define maxc 100
#define maxl 100


void preenche_matriz (int m[][maxc],int *t) {
  int i,j;

  scanf ("%d",t);

  for (i = 0; i < *t; i++) {
    for (j = 0; j < *t; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}

int eh_permutacao (int m[][maxc],int t) {
  int i,j,conta0,conta1;

  for (i = 0; i < t; i++) {
    for (j = conta0 = conta1 = 0; j < t; j++) {
      if (m[i][j]) {
        conta1++;
      }else if (!m[i][j]) {
        conta0++;
      }
    }

    if (conta1 != 1 && conta0 != (t-1) ) {
      return 0;
    }
    
  }
  return 1;
}

int main () {
  int M[maxl][maxc],resposta,t = 1;

  while (t > 0)
  {
    preenche_matriz (M,&t);
    resposta = eh_permutacao (M,t);
    if (resposta) {
      printf ("eh permutacao\n");
    }else {
      printf ("nao eh permutacao\n");
    }
  }
  return 0;
}