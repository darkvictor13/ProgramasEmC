#include <stdio.h>

void vemXParaTraz(char *dest,char *org,int num)
{
  char aux;
  for (; *org; org++,dest++)
  {
    aux = *org;
    aux -= num;
    if (aux < 'A')
    {
      aux += ('Z' - 'A' + 1);
    }
    *dest = aux;
  }
  *dest = '\0';
}

int main()
{
  char entrada[51],saida[51];
  int num,i;

  for (scanf("%d%*c",&i) ; i > 0; i--)
  {
    scanf("%[^\n]%*c",entrada);
    scanf("%d%*c",&num);
    vemXParaTraz(saida,entrada,num);
    printf("%s\n",saida);
  }
  return 0;
}