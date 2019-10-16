#include <stdio.h>
#include <string.h>

void Intercala (char *dest,char *org1,char *org2)
{
  int aux = strlen(org1) - strlen(org2);

  for (; *org1 && *org2; org1++,org2++,dest += 2)
  {
    *dest = *org1;
    *(dest + 1) = *org2;
  }

  for (; aux > 0; aux--,dest++,org1++)
  {
    *dest = *org1;
  }
  
  for (; aux < 0; aux++,dest++,org2++)
  {
    *dest = *org2;
  }
  *dest = 0;
}

int main ()
{
  int i;
  char str1[51],str2[50],str_out[101];
  for (scanf ("%d",&i); i > 0; i--)
  {
    scanf ("%s %s",str1,str2);
    Intercala (str_out,str1,str2);
    printf ("%s\n",str_out);
  }
  return 0; 
}