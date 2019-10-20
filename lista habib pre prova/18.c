#include <stdio.h>

#define maxtam 100

void lerMat (int m[][maxtam],int *n) {
  int i,j;

  scanf("%d",n);

  for (i = 0; i < *n; i++) {
    for (j = 0; j < *n; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}

void lerTrajeto (int v[],int *t) {
  int *p;

  scanf("%d",t);

  p = (v + *t);

  for (; v < p; v++) {
    scanf("%d",v);
  }
}

int dist (int m[][maxtam],int n,int v[],int t) {
  int distancia,*p = (v + t);

  for (distancia = 0,v++; v < p; v++) {
    if (m[*v][*(v - 1)] == -1) {
      return -1;
    }else {
      distancia += m[*v][*(v - 1)];
    }
  }return distancia;
}

int main () {
  int mat[maxtam][maxtam],vet[maxtam],tam_vet,tam_mat;

  lerMat(mat,&tam_mat);
  lerTrajeto(vet,&tam_vet);
  printf("%d\n",dist(mat,tam_mat,vet,tam_vet));
  return 0;
}