#include "bibliotecas.h"

void QualidadeDaSenha (char *str,int *count) {
  int a1,a2,a3,a4;a1=a2=a3=a4=0;
  *count = 0;
  int aux = lenght_v_sem_ser_indexada (str);
  if (aux > 7) {
    *count += 20;
  }

  for (; *str; str++) {
    if (eh_numero(*str)) {
      a1 = 20;
    }
    if (eh_maiusculo(*str)) {
      a2 = 20;
    }
    if (eh_minusculo(*str)) {
      a3 = 20;
    }
    if (eh_especial(*str)) {
      a4 = 20;
    }
  }
  *count += a1+a2+a3+a4;
}

int main () {
  int casos,seguranca_da_senha;
  char senha [101];
  for (scanf("%d ", &casos); casos > 0; casos--) {
    gets (senha);
    QualidadeDaSenha (senha,&seguranca_da_senha);
    printf("seguranca = %d\n", seguranca_da_senha);
  }
  return 0;
}
