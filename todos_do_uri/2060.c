#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i,x;
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    v[i] = x;
  }
}

int mult_2 (int x) {
  if (x % 2 == 0) {
    return 1;
  }else return 0;
}

int mult_3 (int x) {
  if (x % 3 == 0) {
    return 1;
  }else return 0;
}

int mult_4 (int x) {
  if (x % 4 == 0) {
    return 1;
  }else return 0;
}

int mult_5 (int x) {
  if (x % 5 == 0) {
    return 1;
  }else return 0;
}

void printa_bonitinhu (int a2,int a3,int a4,int a5) {
  printf("%d Multiplo(s) de 2\n", a2);
  printf("%d Multiplo(s) de 3\n", a3);
  printf("%d Multiplo(s) de 4\n", a4);
  printf("%d Multiplo(s) de 5\n", a5);
}


int main () {
  int v[1001],n,i,c2 = 0,c3 = 0,c4 = 0,c5 = 0;
  scanf("%d", &n);
  preenche_vet (v,n);
  for (i = 0; i < n; i++) {
    if (mult_2 (v[i]) == 1) {
      c2 ++;
    }
    if (mult_3 (v[i]) == 1) {
      c3 ++;
    }
    if (mult_4 (v[i]) == 1) {
      c4 ++;
    }
    if (mult_5 (v[i]) == 1) {
      c5 ++;
    }
  }
  printa_bonitinhu (c2,c3,c4,c5);
  return 0;
}
