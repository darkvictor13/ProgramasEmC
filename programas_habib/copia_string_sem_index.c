#include "bibliotecas.h"

int main () {
  char sa[101],sb[101];
  while (!strings_sao_iguais(sa,"fim")) {
    gets (sa);
    copystr_sem_index (sb,sa);
    printf("[%s]\n", sb);
  }
  return 0;
}
