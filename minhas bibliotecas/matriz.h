#include <stdio.h>

void preenche_matriz (int matriz[][100],int *l,int *c) {
  int i,j;
  scanf("%d %d", l,c);
  for (i = 0; i < *l; i++) {
    for (j = 0; j < *c; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
}

void show_matriz (int matriz[][100],int l,int c) {
  int i,j;
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }
}

int soma_todos_da_matriz (int M[][100],int num_de_l,int num_de_c) {
  int i,j,soma = 0;
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      soma += M[i][j];
    }
  }return soma;
}

void get_maior (int M[][100],int num_de_l,int num_de_c,int *maior_l,int *maior_c) {
  int i,j,auxl,auxc;
  for (i = auxc = auxl = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      if (M[i][j] > M[auxl][auxc]) {
        auxl = i;
        auxc = j;
      }
    }
  }
  *maior_l = i;
  *maior_c = j;
}

void preenche_ident_minha (int M[][100],int num_de_l,int num_de_c) {
  int i,j;
  if (num_de_l != num_de_c) {
    return ;
  }
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      if (j == i) {
        M[i][j] = 1;
      }else {
        M[i][j] = 0;
      }
    }
  }
}

void preenche_ident_habib (int M[][100],int num_de_l,int num_de_c) {
  int i,j;
  if (num_de_l != num_de_c) {
    return ;
  }
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      M[i][j] = 0;
    }
    M[i][i] = 1;
  }
}

int is_ident (int M[][100],int num_de_l,int num_de_c) {
  int i,j;
  if (num_de_l != num_de_c) {
    return 0;
  }
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      if (i == j) {//diagonal principal
        if (M[i][j] != 1) {
          return 0;
        }
      }else {
        if (M[i][j]) {
          return 0;
        }
      }
    }
  }return 1;
}

void preenche_diagonal_secundaria (int M[][100],int num_de_l,int num_de_c) {
  int i,j,auxc = num_de_c -1;
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      M[i][j] = 0;
    }
    M[i][auxc--] = 1;
  }
}

void preenche_em_sequencia_matriz (int M[][100],int num_de_l,int num_de_c) {
  int i,j,aux = 0;
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      M[i][j] = aux++;
    }
  }
}

void preenche_matriz_triangular_superior (int m[][100],int num_de_l,int num_de_c) {
  int i,j;
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      m[i][j] = (j >= i);
    }
  }
}

void preenche_matriz_triangular_inferior (int *m[100],int num_de_l,int num_de_c) {
  int i,j;
  for (i = 0; i < num_de_l; i++) {
    for (j = 0; j < num_de_c; j++) {
      m[i][j] = (i >= j);
    }
  }
}

void substitui_triangular_superior (int m[][100],int num_de_l,int num_de_c) {
  int i,j;
  for (i = 0; i < num_de_l; i++) {
    for (j = i; j < num_de_c; j++) {
      m[i][j] = 0;
    }
  }
}
