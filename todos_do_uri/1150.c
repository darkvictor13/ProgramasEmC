#include <stdio.h>

void z_is_valid (int *z,int x) {
  while (*z <= x) {
    scanf("%d", z);
  }
}

int ate_passar_Z (int x,int z) {
  int i,resp,soma = 0;
  for (i = x,resp = 0; soma <= z; i++,resp++) {
    soma += i;
  }
  return resp;
}

int main () {
  int x,z,aux;
  scanf("%d", &x);
  scanf("%d", &z);
  z_is_valid (&z,x);
  aux = ate_passar_Z (x,z);
  printf("%d\n", aux);
  return 0;
}
