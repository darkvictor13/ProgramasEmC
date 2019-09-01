#include "bibliotecas.h"

/*int main () {
  char ch,string[41];
  int tam_str,testes,count = 0;
  scanf("%d", &testes);
  while (testes > count) {
    scanf("%d %c", &tam_str,&ch);
    preenche_string (tam_str,ch,string);
    puts (string);
    count++;
  }
  return 0;
}*/

void prenche (int t,char ch,char str) {
  for (; t > 0; t--,str++) {
    *str = ch;
  }
}

int main () {
  char ch,str[101];
  int quantas_letras,i;
  for (scanf("%d", &i); i > 0; i--) {
    scanf("%d %c", &quantas_letras,&ch);
    prenche (quantas_letras,ch,str);
    puts (str);
  }
  return 0;
}
