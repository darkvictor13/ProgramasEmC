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

void preenche_vet_intercalando_os_2(int v3[],int v1[],int v2[],int tamanho_menor){
    int i,c;
  for (i = 0,c = 0; c < tamanho_menor; i+=2,c++) {//easter egg p prox ano
    v3[i] = v1[c];
    v3[i+1] = v2[c];
  }
}

void completa_vet_resposta (int vmaior[],int v_resp[],int tamanho_menor,int tamamnho_maior) {
  int percorre_o_vet_final = (2*tamanho_menor);
  for (int i = tamanho_menor; i < tamamnho_maior; i++,percorre_o_vet_final++) {
    v_resp [percorre_o_vet_final] = vmaior [i];
  }
}

int main () {
  int v1[20],v2[20],v_intercalado[40],tamanho1,tamanho2,tamanho_vet_intercalado;

  scanf("%d", &tamanho1);
  preenche_vet (v1,tamanho1);
  scanf("%d", &tamanho2);
  preenche_vet (v2,tamanho2);
  tamanho_vet_intercalado = tamanho1 + tamanho2;

  if (tamanho1 < tamanho2) {
    preenche_vet_intercalando_os_2 (v_intercalado,v1,v2,tamanho1);
    completa_vet_resposta (v2,v_intercalado,tamanho1,tamanho2);
  } else if (tamanho1 > tamanho2) {
    preenche_vet_intercalando_os_2 (v_intercalado,v1,v2,tamanho2);
    completa_vet_resposta (v2,v_intercalado,tamanho2,tamanho1);
  }else {
    preenche_vet_intercalando_os_2 (v_intercalado,v1,v2,tamanho1);
  }
  printf("--\n");
  print_vet (v_intercalado,(tamanho1+tamanho2));
  return 0;
}
