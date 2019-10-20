#include <stdio.h>

void decifra(char *dest,char *org) {
  int t = strlen(org);
  char *metade = (org + (t/2)),*ultimo_caracter = (org + t - 1);

  for (metade--; metade >= org; metade--,dest++) {
    *dest = *metade;
  }

  metade = (org + (t/2));

  for (; metade <= ultimo_caracter; ultimo_caracter--,dest++) {
    *dest = *ultimo_caracter;
  }
  *dest = '\0';
}

int main () {
  char str1[101],str2[101];
  int i;

  for (scanf("%d%*c",&i); i > 0; i--) {
    scanf("%[^\n]%*c",str1);
    decifra(str2,str1);
    printf("%s\n",str2);
  }
  return 0;
}