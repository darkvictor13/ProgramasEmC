#include <stdio.h>

void vetor (int n,int v[]) {
  for (int i = 0; i < 4; i++) {
    v[i] = n;
  }
}

void printa_vetor (int vx[]) {
  int i = 0;
  while (i < 2) {
    printf("%d", vx[i]);
    i++;
  }
  printf(":");

}while (i > 4 && i < 2) {
  printf("%d", vx[i]);
  i++;
}
}

int main () {
  int x,v[4],i = 0;
  while (i < 4){
    scanf("%d", &x);
    vetor (x);
  }
  printa_vetor (v);
  return 0;
}
