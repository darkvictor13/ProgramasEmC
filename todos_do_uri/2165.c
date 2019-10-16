#include <stdio.h>
#include <string.h>

int main ()
{
  char str[501];

  scanf ("%[^\n]%*c",str);

  if (strlen(str) > 140)
  {
    printf("MUTE\n");
  }
  else
  {
    printf("TWEET\n");
  }

  return 0;
}