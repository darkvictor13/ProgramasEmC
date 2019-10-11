#include <stdio.h>

#define max 100

void preenche_matriz (int m[][max],int *nl,int *nc) {
  int i,j;

  scanf ("%d %d",nl,nc);

  for (i = 0; i < *nl; i++) {
    for (j = 0; j < *nc; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}

int linha_esta_certa (int *v,vet_comp[t],int t)
{
  for (int i = 0; i < t; i++)
  {
    if (v[i] != vet_comp[i])
    {
      return 0;
    }
  }
}

int quadrado_latino (int m[][max],int nl,int nc) 
{
  int i,vet_comp [nl];

  for (i = 0; i < nl; i++)
  {
    vet_comp[i] = i+1;
  }
  

  for (i = 0; i < nl; i++)
  {
    if (!linha_esta_certa (m[i],vet_comp,nl))
    {
      return 0;
    }
  }
  return 1;
} 