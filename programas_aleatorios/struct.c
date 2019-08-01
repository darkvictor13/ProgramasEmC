#include <stdio.h>
int victor = 1;
struct programador {
    int peso : 1;
    int idade : 1;
    int materias_reprovadas : 1;
    int materias_dp : 1;
    int materias_passadas : 1;
    int victor : 3;
};

int main () {
  struct programador cleivo;
  printf("%d\n", cleivo.peso);
  return 0;
}
