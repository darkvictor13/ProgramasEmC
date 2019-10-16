#include <stdio.h>

int main ()
{
  int tam;

  while (scanf ("%d",&tam) != EOF)
  {
    int matriz[tam][tam],i,j;

    for (i = 0; i < tam; i++)
    {
      for (j = 0; j < tam; j++)
      {
        matriz[i][j] = 0;
      }
      matriz[i][i] = 2;
      matriz[i][(tam - i) - 1] = 3;
    }

    int inicio,fim;

    inicio = tam/3;
    fim = tam - (tam/3);

    for (i = inicio; i < fim; i++)
    {
      for (j = inicio; j < fim; j++)
      {
        matriz[i][j] = 1;
      }
    }
    
    int aux;

    if (tam % 2)
    {
      aux = tam/2;
    }
    else
    {
      aux = (tam/2) - 1;
    }
    matriz[aux][aux] = 4;

    for (i = 0; i < tam; i++)
    {
      for (j = 0; j < tam; j++)
      {
        printf("%d",matriz[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}