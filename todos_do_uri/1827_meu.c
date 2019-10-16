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
    m[i][(t-i) - 1] = 3;
  }
}

void Coloca1E4 (int m[][maxt],int t)
{
  int i,j,termina = t - (t/3),inicio = (t/3);

  for (i = inicio; i < termina; i++)
  {
    for (j = inicio; j < termina; j++)
    {
      m[i][j] = 1;
    }
  }
  m[t/2][t/2] = 4;
}

void print (int m[][maxt],int t)
{
  int i,j;

  for (i = 0; i < t; i++)
  {
    for (j = 0; j < t; j++)
    {
      printf ("%d",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main () 
{
  int matriz[maxt][maxt],tam;

  while (scanf ("%d",&tam) != EOF)
  {
    clear (matriz,tam);
    diagPrincipalESec (matriz,tam);
    Coloca1E4(matriz,tam);
    print(matriz,tam);
    scanf ("%d",&tam);
  }
  return 0;
}