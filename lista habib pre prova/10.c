#include <stdio.h>

#define maxtam 100

void lerMat(int m[][maxtam],int *lm,int *cm) {
  int i,j;

  printf("linhas = ");
  scanf("%d",lm);
  printf("colunas = ");
  scanf("%d",cm);
  printf("Entre com a matriz :\n");

  for (i = 0; i < *lm; i++) {
    for (j = 0; j < *cm; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
  printf("\n");
}

int umIndiceDaMult(int A[][maxtam],int linha,int B[][maxtam],int coluna,int tam) {
  int count,soma;

  for (count = soma = 0; count < tam; count++) {
    soma += A[linha][count] * B[count][coluna];
  }
  return soma;
}

int mult(int A[][maxtam],int la,int ca,int B[][maxtam],int lb,int cb,int C[][maxtam],int *lc,int *cc) {
  int i,j;

  if (ca != lb) {
    return 0;
  }else {
    *lc = la;
    *cc = cb;
  }
  
  for (i = 0; i < *lc; i++) {
    for (j = 0; j < *cc; j++) {
      C[i][j] = umIndiceDaMult(A,i,B,j,lb);
      //printf("linha = %d|coluna = %d| num = %d\n",i,j,C[i][j]);
    }
  }
  return 1;
}

void printandoMat(int m[][maxtam],int tam_l,int tam_c) {
  int i,j;

  for (i = 0; i < tam_l; i++) {
    for (j = 0; j < tam_c; j++) {
      printf ("%d ",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  int a[maxtam][maxtam],b[maxtam][maxtam],c[maxtam][maxtam];
  int la,ca,lb,cb,lc,cc;

  printf("entre com um numero de linhas, colunas e a matriz A:\n");
  lerMat(a,&la,&ca);
  printf("entre com um numero de linhas, colunas e a matriz B:\n");
  lerMat(b,&lb,&cb);
  printf("produto das matrizes igual :\n");
  mult(a,la,ca,b,lb,cb,c,&lc,&cc);
  printandoMat(c,lc,cc);
  return 0;
}