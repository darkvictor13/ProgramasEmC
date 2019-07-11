#include <stdio.h>

void loop (int *tamanho_loop) {
  scanf("%d", tamanho_loop);
}

int raio_conduite (int r1,int r2) {
  int resposta;
  resposta = r1 + r2;
  return resposta;
}

int main () {
  int i,r1,r2;
  loop(&i);
  for (; i > 0; i--) {
    scanf("%d %d", &r1,&r2);
    printf("%d\n", raio_conduite (r1,r2) );
  }
  return 0;
}
