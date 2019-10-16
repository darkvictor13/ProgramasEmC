#include <stdio.h>

int jogoDaPaula (int n1,int n2,char c)
{
  if (n1 == n2)
  {
    return (n1 * n1);
  }
  if (c >= 'A' && c <= 'Z')
  {
    return n2-n1;
  }
  if (c >= 'a' && c <= 'z')
  {
    return n1+n2;
  }
}

int main ()
{
  int n1,n2,count;
  char X;

  for (scanf("%d",&count); count > 0; count--)
  {
    scanf("%d%c%d",&n1,&X,&n2);
    printf("%d\n",jogoDaPaula(n1,n2,X));
  }
  return 0;
}