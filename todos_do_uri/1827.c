#include <stdio.h>

#define maxt 102

void clear (int m[][maxt],int t) 
{
  int i,j;
  for (i = 0; i < t; i++)
  {
    for (j = 0; j < t; j++)
    {
      m[i][j] = 0;
    }
  }
}

void diagPrincipalESec (int m[][maxt],int t)
{
  int i;

  for (i = 0; i < t; i++)
  {
    m[i][i] = 2;
    m[i][(t-i)] = 3;
  }
}

int main () 
{
  int matriz[maxt][maxt],tam;

  scanf ("%d",&tam);

  while (tam > 0)
  {
    clear (matriz,tam);
    diagPrincipalESec (matriz,tam);
  }
  return 0;
}