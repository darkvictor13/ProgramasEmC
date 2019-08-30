#include "bibliotecas.h"

void printa_vet_certinho (int *v,int t) {
  for (int i = 0; i < t; i++) {
    if (*(v+i)) {
      printf("#%c = %d\n", 'a'+i, *(v+i));//v[i]
    }
  }
}

int main () {
  char str_entrada[101],str_resposta[101];
  int n = 'z'-'a'+1;
  int v[n];
  while (!strings_sao_iguais(str_entrada,"fim")) {
    limpa_vet (v,n);
    gets (str_entrada);
    copystr (str_resposta,str_entrada);
    transforma_em_maiusculo_toda_a_string (str_resposta);
    conta_todas_as_letras (str_resposta,v,n);
    printa_vet_certinho (v,n);
  }
  return 0;
}
