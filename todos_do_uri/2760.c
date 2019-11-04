#include <stdio.h>
#include <string.h>

void printaStr10char (char str[]) {
  char *final = (str + 10);
  for (; str < final; str++) {
    printf("%c",*str);
  }
}

void geraUltimoPadrao (char str1[],char str2[],char str3[]) {
  if (strlen(str1) > 10) {
    printaStr10char(str1);
  }else {
    printf("%s",str1);
  }

  if (strlen(str2) > 10) {
    printaStr10char(str2);
  }else {
    printf("%s",str2);
  }

  if (strlen(str3) > 10) {
    printaStr10char(str3);
  }else {
    printf("%s",str3);
  }
  printf("\n");
}

int main () {
  char frase1[101],frase2[101],frase3[101];

  scanf("%[^\n]%*c",frase1);
  scanf("%[^\n]%*c",frase2);
  scanf("%[^\n]",frase3);

  printf("%s%s%s\n",frase1,frase2,frase3);
  printf("%s%s%s\n",frase2,frase3,frase1);
  printf("%s%s%s\n",frase3,frase1,frase2);
  geraUltimoPadrao(frase1,frase2,frase3);

  return 0;
}