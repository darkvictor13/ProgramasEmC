#include <stdio.h>

int vet_tds_os_dig (int count,int v[]) {
  int n,i = 0;
  for (; count > 0; count--) {
    scanf("%d", &n);
    while (n > 0){
      v[i] = n%10;
      n/=10;
      i++;
    }
  }
  return i;
}

int eh_par (int n) {
  if (n % 2 == 0) {
    return 1;
  }
  return 0;
}

int eh_impar (int n) {
  if (n % 2 == 1) {
    return 1;
  }
  return 0;
}

void conta_p_imp (int v[],int *par,int *imp,int count) {
  for (int i = 0; i < count; i++) {
    if (eh_par (v[i]) == 1) {
      (*par)++;
    }
    if (eh_impar (v[i]) == 1) {
      (*imp)++;
    }
  }
}

void printa_bunitu (int im,int par) {
  printf("#pares = %d\n", par);
  printf("#impares = %d\n", im);
}

int main () {
  int v[100],casos,n,pares = 0,impares = 0,aux;
  scanf("%d", &casos);
  aux = vet_tds_os_dig (casos,v);
  conta_p_imp (v,&pares,&impares,aux);
  printa_bunitu (impares,pares);
  return 0;
}
