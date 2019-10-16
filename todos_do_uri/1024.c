#include <stdio.h>
#include <string.h>

#define max_t_str 1001

void primeiraPassada(char *dest,char *org)
{
  for (; *org; org++,dest++)
  {
    if (islower(*org) || isupper(*org))
    {
      *dest = *org + 3;
    }
    else
    {
      *dest = *org;
    }
  }
  *dest = 0;
}

void inverteStr(char *str)
{
  char aux,*p = (str + strlen(str) - 1);

  for (; str < p; str++,p--)
  {
    aux = *str;
    *str = *p;
    *p = aux;
  }
}

void terceiraPassada(char *dest)
{
  dest = dest + (strlen(dest)/2);
  for (; *dest; dest++)
  {
    *dest = *dest - 1;
  }
}

int main()
{
  char original[max_t_str],saida[max_t_str];
  int i;

  for (scanf("%d%*c",&i); i > 0; i--)
  {
    scanf("%[^\n]%*c",original);
    primeiraPassada(saida,original);
    inverteStr(saida);
    terceiraPassada(saida);
    puts(saida);
  }
  return 0;
}