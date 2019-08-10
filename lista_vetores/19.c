#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int soma_dos_dig (int n) {
//logica pegar cada termo de um num matando o num:
//guarde o resto dele com 10 dps divida o num por 10
  int aux = 0;
  while (n > 0) {
    aux += n % 10;
    n /= 10;
  }
  return aux;
}

int soma_eh_par (int n) {
  int aux = soma_dos_dig (n);
  if (aux % 2 == 0) {
    return 1;
  }
  return 0;
}

void preenche_vet_pares (int v_par[],int v_maior[],int tam_maior,int *tam_par) {
  int percorre_maior = 0; *tam_par = 0;// i do v_par
  for (; percorre_maior < tam_maior; percorre_maior++) {
    if (soma_eh_par (v_maior[percorre_maior])) {
      v_par[(*tam_par)] = v_maior[percorre_maior];
      (*tam_par)++;
    }
  }
}

void preenche_vet_impares (int v_impar[],int v_maior[],int tam_maior,int *tam_impar) {
  *tam_impar = 0;
  for (int i = 0; i < tam_maior; i++) {
    if (soma_eh_par (v_maior[i]) == 0) {
      v_impar[(*tam_impar)] = v_maior[i];
      (*tam_impar)++;
    }
  }
}

int main () {
  int v_scaneado[20],v_impar[20],v_par[20];
  int tam_par,tam_impar,tam_scaneado;
  scanf("%d", &tam_scaneado);
  preenche_vet (v_scaneado,tam_scaneado);
  preenche_vet_pares (v_par,v_scaneado,tam_scaneado,&tam_par);
  preenche_vet_impares (v_impar,v_scaneado,tam_scaneado,&tam_impar);
  printf("Primeiro vetor\n");
  print_vet (v_par,tam_par);
  printf("\nSegundo vetor\n");
  print_vet (v_impar,tam_impar);
  return 0;
}
