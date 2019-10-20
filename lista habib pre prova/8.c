#include <stdio.h>

#define maxtam 100

int deslocSup(int m[][maxtam],int t) {
  int i,j;

  for (i = 0; i < t; i++) {
    for (j = 0; j < t; j++) {
      if (j != i+1) {
        if(m[i][j]) {
          return 0;
        }
      }else if (m[i][j] != 1) { 
        return 0;
      }
    } 
  }return 1;
}

void lerMat(int m[][maxtam],int *n) {
  int i,j;

  scanf("%d",n);

  for (i = 0; i < *n; i++) {
    for (j = 0; j < *n; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}

int main() {
  int m[maxtam][maxtam],t;

  lerMat(m,&t);

  if (deslocSup(m,t)) {
    printf("eh deslocamento superior\n");
  }else {
    printf("nao eh deslocamento superior\n");
  }
  return 0;
}