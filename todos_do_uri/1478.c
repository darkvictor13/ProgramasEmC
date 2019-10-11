#include <stdio.h>
#include <math.h>

#define max 101

/*void matriz_quadrada (int m[][max],int t) 
{
  int i,j;

  for (i = 0; i < t; i++)
  {
    for (j = 0; j < t; j++)
    {
      m[i][j] = abs(i - j) + 1;
    }
  }
}*/

void matriz_quadrada (int m[][max],int t) 
{
  int i,j,num;

  for (i = 0; i < t; i++)
  {
    num = (i+1);
    m[i][i] = 1;
    for (j = 0; j < i; j++,num--)
    {
      m[i][j] = num;
    }
    for (; j < t; j++,num++)
    {
      m[i][j] = num;
    }
  }
}

void printa_matriz_jeito_chato_do_uri (int m[][max],int t)
{
  int i,j;

  for (i = 0; i < t; i++) 
  {
    for (j = 0; j < t-1; j++) 
    {
      printf("%3d ", m[i][j]);
    }
    printf("%3d\n", m[i][j]);
  }
  printf("\n");
}

int main () 
{
  int matriz[max][max],tamanho;

  scanf ("%d",&tamanho);

  while (tamanho > 0)
  {
    matriz_quadrada (matriz,tamanho);
    printa_matriz_jeito_chato_do_uri (matriz,tamanho);
    scanf ("%d",&tamanho);
  }
  return 0;
}