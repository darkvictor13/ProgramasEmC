#include <stdio.h>

void ler (int vx [],int * nx){
  int i;
  scanf("%d",nx);
  for (i = 0;i < *nx;i++)
    scanf("%d",&vx[i]);
}

int indx_maior (int vx[], int nx){
  int m,i;
  for (m =0,i = 1; i < nx; i++){
      if (vx[i] > vx[m]){
        m = i;
      }
  }
  return m;
}

void swap (int * a,int * b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void maior_ultimo (int vx[],int nx){
  int temp,t;
  t = indx_maior (vx,nx);
  swap (vx[nx],vx[t])
}



void ordena (int vy[],int ny){
    int i;
    maior_ultimo (vy,ny);
    for (i = ny-1 ;i >= 1; i--){
        maior_ultimo (vy[0],i);
    }
}

void print (int vz [] ,int nz){
    for (i = 0; i >= 0; i--) {
      printf("%d\n",vz[i]);
    } v[i]
}

int main () {
  int v[100],n;
  ler (v,&n);
  ordena (v,n);
  print (v,n);
  return 0;
}
