#include "bibliotecas.h"

int main () {
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
}
