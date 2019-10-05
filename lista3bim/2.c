#include <stdio.h>
#include <string.h>

int conta_parenteses (char *str) {
  int abre,fecha;
  if (*str == ')') {
    return 0;
  }
  str++;
  abre=1;
  for (fecha = 0; *str; str++) {
    if (*str == ')') {
      fecha++;
    }else {
      abre++;
    }
  }
  return abre == fecha;
}

void printa_bonitinhu (int x) {
  if (x == 1) {
    printf("sim\n");
  }else {
    printf("nao\n");
  }
}

int main () {
  char str[100];
  int resposta;
  scanf ("%[^\n]%*c",str);
  //gets(str);
  while (strcmp(str,"fim")) {
    resposta = conta_parenteses (str);
    printa_bonitinhu (resposta);
    scanf ("%[^\n]%*c",str);
    //gets (str);
  }
  return 0;
}