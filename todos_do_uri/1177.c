#include <stdio.h>

void preencher (int n,int v[]) {
  int i,j,count = 0;
  for (i = 0; count < 1000; i += n) {
    for (j = 0;j < n; j++) {
      v[i+j] = j;
      count ++;
    }
  }
}

void print_vetor(int v[]) {
  int i;
  for (i = 0; i < 1000; i++) {
    printf("N[%d] = %d\n",i, v[i]);
  }
}

int main () {
  int num,v[1001];
  scanf("%d", &num);
  preencher (num,v);
  print_vetor (v);
}
