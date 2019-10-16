#include <stdio.h>
#include <string.h>

int SenhaValida (char *str)
{
  int tam = strlen(str);
  int tem_maiusc,tem_minusc,tem_num,acentos_etc;

  if (tam < 6 || tam > 32) {
    return 0;
  }
  
  for (tem_maiusc = tem_minusc = tem_num = 0; *str; str++)
  {
    if (ispunct(*str))
    {
      return 0;
    }
    else if (*str == ' ')
    {
      return 0;
    }
    else if (isdigit(*str))
    {
      tem_num = 1;
    }
    else if (islower(*str))
    {
      tem_minusc = 1;
    }
    else if (isupper(*str))
    {
      tem_maiusc = 1;
    }
  }
  return (tem_maiusc && tem_minusc && tem_num);
}

int main ()
{
  char str[151];

  while (scanf("%[^\n]%*c",str) != EOF)
  {
    if (SenhaValida(str))
    {
      printf("Senha valida.\n");
    }
    else
    {
      printf("Senha invalida.\n");
    }
  }
  return 0;
}