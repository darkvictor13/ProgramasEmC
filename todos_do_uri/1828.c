#include <stdio.h>
#include <string.h>

int PedraPapelTesouraLagartoSpock(char s1[],char s2[]) {
  //-1 = raj ganha/0 = empate/1 sheldon ganha
  if (!strcmp(s1,s2)) return 0;

  if (*s1 == 'S') {
    if (*s2 == 't' || !strcmp(s2,"pedra")) {
      return 1;
    }
  }
  if (*s1 == 't') {
    if (*s2 == 'l' || !strcmp(s2,"papel")) {
      return 1;
    }
  }
  if (!strcmp(s1,"papel")) {
    if (!strcmp(s2,"pedra") || *s2 == 'S') {
      return 1;
    }
  }
  if (!strcmp(s1,"pedra")) {
    if (*s2 == 'l' || *s2 == 't') {
      return 1;
    }
  }
  if (*s1 == 'l') {
    if (*s2 == 'S' || !strcmp(s2,"papel")) {
      return 1;
    }
  }
  return -1;
}

int main () {
  int casos,aux,i;
  char str1[15],str2[15];

  scanf("%d%*c",&casos);

  for (i = 1; i <= casos; i++) {
    scanf("%s %s",str1,str2);
    aux = PedraPapelTesouraLagartoSpock(str1,str2);
    if (!aux) {
      printf("Caso #%d: De novo!\n",i);
    }else if (aux == 1){
      printf("Caso #%d: Bazinga!\n",i);
    }else {
      printf("Caso #%d: Raj trapaceou!\n",i);
    }
  }

  return 0;
}