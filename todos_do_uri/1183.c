#include <stdio.h>

void maior (float *maior,float nota,int matricula,int *m_escolhido) {
  if (nota > *maior) {
    *maior = nota;
    *m_escolhido = matricula;
  }
}

void escolhido_serve (float nota,int matricula) {
  if (nota >= 8) {
    printf("%d\n", matricula);
  }else printf("Minimum note not reached\n");
}

int main () {
  float nota,maior_nota;int matricula,escolhido,count;
  scanf("%d", &count);
  scanf("%d %f",&escolhido,&maior_nota);
  for (; count - 1 > 0; count --) {
    scanf("%d %f",&matricula,&nota);
    maior (&maior_nota,nota,matricula,&escolhido);
  }
  escolhido_serve (maior_nota,escolhido);
  return 0;
}
