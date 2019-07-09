#include <stdio.h>

float media_p (float n1,float n2,float n3) {
  return ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
}

void deixar_bonitinho_o_num_de_loop (int * n) {
  scanf("%d", n);
}

int main () {
  float nota1,nota2,nota3;int i;
  deixar_bonitinho_o_num_de_loop (&i);
  for (; i > 0; i--) {
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    printf("%.1f\n", media_p (nota1,nota2,nota3));
  }
}
