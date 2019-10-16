#include <stdio.h>
#include <ctype.h>

void DancingSentence (char *org,char *dest)
{
  int count;
  for (count = 0; *org; org++,dest++,count++)
  {
    while (*org == ' ')
    {
      *dest = ' ';
      dest++;
      org++;
    }
    if (count % 2)
    {
      *dest = tolower (*org);
    }
    else
    {
      *dest = toupper (*org);
    }
  }
  *dest = '\0';
}

int main ()
{
  char entrada[51],saida[51];
  while (scanf ("%[^\n]%*c",entrada) != EOF)
  {
    DancingSentence (entrada,saida);
    printf ("%s\n",saida);
  }
  return 0;
}