#include "bibliotecas.h"

int conta_n_importa_se_eh_maiuscula (char *s,char x) {
  char aux; int count  = 0;
  if (x >= 'a' && x <= 'z') {
    aux = x + 'A' - 'a';
  }
  if (x >= 'A' && x <= 'Z') {
    aux = x + 'a' - 'A';
  }

  for (; *s; s++) {
    if (*s == x || *s == aux) {
      count ++;
    }
  }
  return count;
}

int main(){
  char str[101],ch;
  int count,casos;
  for (scanf("%d %c ", &casos,&ch); casos > 0; casos--) {
    gets (str);
    count = conta_n_importa_se_eh_maiuscula (str,ch);
    printf("aparece %d vezes\n", count);
  }
  return 0;
}
