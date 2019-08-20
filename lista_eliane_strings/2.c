#include "bibliotecas.h"
//arrumar
int main () {
  char string[41],string_resposta[41];
  int testes,count = 0,i;
  scanf("%d ", &testes);
  while (testes > count) {
    //scanf("%s", &string);
    gets (string);
    copystr (string_resposta,string);
    for (i = 0; (string_resposta[i]&&string_resposta[i+1]); i+=2) {
      //transforma_um_char_em_maiusculo(string_resposta[i]);
      //transforma_um_char_em_minusculo(string_resposta[i+1]);
      string_resposta[i] = toupper (string_resposta[i]);
      string_resposta[i+1] = tolower (string_resposta[i+1]);
    }
    puts (string_resposta);
    count++;
  }
  return 0;
  }
