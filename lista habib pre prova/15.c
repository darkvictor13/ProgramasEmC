#include <stdio.h>
#define max 100

void lerMat(int m[][max],int *l,int *c) {
  int i,j;

  scanf("%d %d",l,c);

  for (i = 0; i < *l; i++) {
    for (j = 0; j < *c; j++) {
      scanf("%d",&m[i][j]);
    }
  }
}

int achaX(int m[][max],int l,int c,int x) {
  int i,j;

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      if (m[i][j] == x) {
        return 0;
      }
    }
  }
  return 1;
}

int main () {
  int m[max][max],nl = 1,nc = 1,code,num;

  while (nl > 0 && nc > 0) {
    printf("Entre com o numero a ser achado :\n");
    scanf("%d",&num);
    printf("Agora entre com o num de linhas e col da matriz, e ela mesma\n");
    lerMat(m,&nl,&nc);
    code = achaX(m,nl,nc,num);
    printf("CODE = %d\n",code);
  }
  return 0;
}