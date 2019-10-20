#include <stdio.h>
#include <string.h>

void retiraParametro (char *dest,char *org,char *r) {
  int tam_r = strlen(r),i,remover,eh_igual;

  for (; *org; org++,dest++) {
    for (i = eh_igual = 0; i < tam_r; i++) {
      if (r[i] == *(org+i)) {
        eh_igual++;
      }
    }
    if (eh_igual != tam_r) {
      *dest = *org;
    }else {
      org += tam_r;
    }
  }
  *dest = '\0'; 
}

int main () {
  char origem[51],parametro[10],destino[51];

  //scanf("%[^\n]",parametro);
  gets(parametro);

  while (strcmp(gets(origem),"fim")) {
    retiraParametro(destino,origem,parametro);
    printf("|%s|",destino);
  }
  return 0;
}