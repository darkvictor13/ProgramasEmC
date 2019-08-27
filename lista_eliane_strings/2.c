#include "bibliotecas.h"
//arrumar
int main () {
  char string[41],string_resposta[41];
  int testes,count = 0,i,conta_se_eh_maiusc_ou_min = 0;;
  scanf("%d ", &testes);
  while (testes > count) {
    //scanf("%s", &string);
    gets (string);
    copystr (string_resposta,string);
    for (i = 0; string_resposta[i]; i++,conta_se_eh_maiusc_ou_min++) {
      if (string_resposta[i] == ' ') {
        conta_se_eh_maiusc_ou_min--;
        }
      if (conta_se_eh_maiusc_ou_min%2 == 0) {
        //string_resposta[i] = toupper (string_resposta[i]);
        transforma_um_char_em_maiusculo(&string_resposta[i]);
      }
      if (conta_se_eh_maiusc_ou_min%2 == 1) {
        //string_resposta[i] = tolower (string_resposta[i]);
        transforma_um_char_em_minusculo(&string_resposta[i]);
        }
    }
    puts (string_resposta);
    count++;
  }
  return 0;
  }
