#include <stdio.h>

int checar_senha (int n) {
  if (n == 2002) {
    return 1;
  }
  else return 0;
}

int main () {
  int senha;
  scanf("%d", &senha);
  while (1) {
    if (checar_senha(senha) == 1) {
      printf("Acesso Permitido\n");
      break;
    }else {
      printf("Senha Invalida\n");
  }
    scanf("%d", &senha);
  }
  return 0;
}
