#include <stdio.h>

#define maxc 100
#define maxl 100

void preenche_matriz (int m[][maxc],int *t)
{
  int i,j;

  scanf ("%d",t);

  for (i = 0; i < *t; i++) 
  {
    for (j = 0; j < *t; j++) 
    {
      scanf ("%d",&m[i][j]);
    }
  }
}

int SomaDiagP (int m[][maxc],int t)
{
  int i,s;

  for (i = s = 0; i < t; i++)
  {
    s += m[i][i];
  }
  return s;
}

int SomaDiagSec (int m[][maxc],int t)
{
  int i,s;

  for (i = s = 0; i < t; i++)
  {
    s += m[i][(t-i)-1];
  }
  return s;
}

int TestaLinhas (int m[][maxc],int t,int soma)
{
  int i,j,s;

  for (i = 0; i < t; i++)
  {
    for (j = s = 0; j < t; j++)
    {
      s += m[i][j];
    }
    if (s != soma)
    {
      return 0;
    }
  }
  return 1;
}

int TestaColunas (int m[][maxc],int t,int soma)
{
  int i,j,s;

  for (j = 0; j < t; j++)
  {
    for (i = s = 0; i < t; i++)
    {
      s += m[i][j];
    }
    if (s != soma)
    {
      return 0;
    }
  }
  return 1;
}

int MatrizQuadradoMagico (int m[][maxc],int n)
{
  int i,j,soma;
  
  soma = SomaDiagP (m,n);
  if (soma != SomaDiagSec(m,n))
  {
    return 0;
  }
  if (!TestaLinhas(m,n,soma))
  {
    return 0;
  }
  if (!TestaColunas(m,n,soma))
  {
    return 0;
  }
  return 1;
}

int main () 
{
  int mat[maxl][maxc],n;
  
  preenche_matriz (mat,&n);
  printf ("%s\n",MatrizQuadradoMagico(mat,n)?"sim":"nao");
  return 0;
}