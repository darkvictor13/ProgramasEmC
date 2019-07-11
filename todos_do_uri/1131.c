#include <stdio.h>

int novo_grenal () {//verifica se vai ter mais um grenal ou n
  int x;
  while (x != 1 || x != 2) {
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &x);
    if (x == 1) {
      return 1;
    }
    if (x == 2) {
      return 0;
    }
  }
}

void preenche_vet (int gremio[],int inter[],int i) {
  scanf("%d %d", &inter[i], &gremio[i]);
}

void analise_dos_dados (int gr[],int in[],int n) {
  int emp = 0,v_gr = 0,v_in = 0,i;
  for (i = 0; i < n; i++) {
    if (gr[i] > in[i]) {
      v_gr ++;
    }
    if (gr[i] < in[i]) {
      v_in ++;
    }
    if (gr[i] == in[i]) {
      emp ++;
    }
  }
  printf("%d grenais\n", i);
  printf("Inter:%d\n", v_in);
  printf("Gremio:%d\n", v_gr);
  printf("Empates:%d\n", emp);
  if (v_gr > v_in) {
    printf("Gremio venceu mais\n");
  } else if (v_gr < v_in) {
    printf("Inter venceu mais\n");
  } else {
    printf("Nao houve vencedor\n");
  }
}

int main () {
  int g[1000],in[1000],i;
  preenche_vet (g,in,0);
  for (i = 1; novo_grenal() != 0; i++) {
    preenche_vet (g,in,i);
  }
  analise_dos_dados (g,in,i);
  return 0;
}
