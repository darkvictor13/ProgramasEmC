#include <stdio.h>

void mudando_valores (int *ponteiro) {
  scanf("%d", ponteiro);
}

void desejo_dos_alunos (int v[],int casos) {
  int i,n;
  for (i = 0; i < casos; i++) {
    scanf("%d", &n);
    v[i] = n;
  }
}

int saber_ja_apareceu (int v[],int count,int n) {
  int i;
  for (i = 0; i < count; i++) {
    if (v[i] == n) {
      return 0;
    }
  }
  return 1;
}

void vetor_resposta (int vetor_aux[],int v_resposta[],int count) {
  int i,vontade_do_aluno_i;
  for (i = 0; i < count; i++) {
    vontade_do_aluno_i = vetor_aux[i];
    if ((i+1) < vontade_do_aluno_i) {
      if (saber_ja_apareceu (v_resposta,i,vontade_do_aluno_i) == 1) {
        v_resposta[i] = vontade_do_aluno_i;
        v_resposta[(vontade_do_aluno_i - 1)] = (i + 1);
      }
    }
  }
}

void printa_vetor (int v[],int count) {
  int i;
  for (i = 0; i < count; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main () {
  int desejo_aluninhu[10001],v_resp[10001],quantos_alunos;

  /*while (!feof) {*/while (1) {
    mudando_valores (&quantos_alunos);
    desejo_dos_alunos (desejo_aluninhu,quantos_alunos);
    if (quantos_alunos % 2 != 0) {
      printf("IMPOSSIBLE\n");
    }else {
      vetor_resposta (desejo_aluninhu,v_resp,quantos_alunos);
      printa_vetor (v_resp,quantos_alunos);
    }
  }
  return 0;
}
