#include <stdio.h>

void tabuleiro (char v[9]) {
  printf("    %c | %c | %c \n", v[0],v[1],v[2]);
  printf("   -----------\n");
  printf("    %c | %c | %c \n", v[3],v[4],v[5]);
  printf("   -----------\n");
  printf("    %c | %c | %c \n\n", v[6],v[7],v[8]);
}

void inicializacao_jogo () {
  char v[9] = {'1','2','3','4','5','6','7','8','9'};
  printf("    INSTRUCOES\n\n");
  printf("o jogo deve ser jogado assim, insira a casa na qual quer jogar\n\n");
  printf("as casas estao dispostas dessa maneira\n\n");
  tabuleiro (v);
  printf("preparado para comecar o jogo????\n");
}

void limpa_tabuleiro (char casas[]) {
  int i;
  for (i = 0; i < 9; i++) {
    casas [i] = ' ';
  }
}

/*int jogar_denovo (int *a) {
  printf("vai querer jogar denovo? (1-sim 2-nao)\n");
  while (*a != 2 && *a != 1) {
    scanf("%d", a);
    if (*a == 2) {
      return 0;
    }
    if (*a == 1) {
      return 1;
    }
    printf("Ei leia os comandos direito te mandei escrever 1 ou 2 :(\n");
  }
}*/

int marcar_no_tab (char casas[],int turno) {
  int jogada,jogada_is_valid = 0;
  printf("Digite a casa para marcar [1 - 9]\n");
  scanf("%d", &jogada);
  while (jogada_is_valid == 0) {
    if (jogada < 1 || jogada > 9) {
      printf("jogada invalida tente denovo\n");
      scanf("%d", &jogada);
    }else if (casas [jogada - 1] != ' ') {
      printf("jogada invalida tente denovo\n");
      scanf("%d", &jogada);
    }else {
      jogada_is_valid = 1;
    }
  }
    if (turno % 2 == 0) {
      casas[jogada - 1] = 'X';
    }else {
      casas[jogada - 1] = 'O';
      }
}

int vitoria_X (char casas[]) {
  if (casas[0]== 'X' && casas[1]== 'X' && casas[2]== 'X') {
    return 1;
  }if (casas[3]== 'X' && casas[4]== 'X' && casas[5]== 'X') {
    return 1;
  }if (casas[6]== 'X' && casas[7]== 'X' && casas[8]== 'X') {
    return 1;
  }if (casas[0]== 'X' && casas[3]== 'X' && casas[6]== 'X') {
    return 1;
  }if (casas[1]== 'X' && casas[4]== 'X' && casas[7]== 'X') {
    return 1;
  }if (casas[2]== 'X' && casas[5]== 'X' && casas[8]== 'X') {
    return 1;
  }if (casas[0]== 'X' && casas[4]== 'X' && casas[8]== 'X') {
    return 1;
  }if (casas[2]== 'X' && casas[4]== 'X' && casas[6]== 'X') {
    return 1;
  }return 0;}

int vitoria_O (char casas []) {
  if (casas[0]== 'O' && casas[1]== 'O' && casas[2]== 'O') {
    return 1;
  }if (casas[3]== 'O' && casas[4]== 'O' && casas[5]== 'O') {
    return 1;
  }if (casas[6]== 'O' && casas[7]== 'O' && casas[8]== 'O') {
    return 1;
  }if (casas[0]== 'O' && casas[3]== 'O' && casas[6]== 'O') {
    return 1;
  }if (casas[1]== 'O' && casas[4]== 'O' && casas[7]== 'O') {
    return 1;
  }if (casas[2]== 'O' && casas[5]== 'O' && casas[8]== 'O') {
    return 1;
  }if (casas[0]== 'O' && casas[4]== 'O' && casas[8]== 'O') {
    return 1;
  }if (casas[2]== 'O' && casas[4]== 'O' && casas[6]== 'O') {
    return 1;
  }return 0;}

int main () {
  int a = 0,count_jogadas = 1,jogada,turno = 0,aux;
  char casas [9];
  limpa_tabuleiro (casas);
  inicializacao_jogo ();
  printf("(1-inicia o jogo 2-finaliza programa)\n");
  while (a != 2 && a != 1) {
    scanf("%d", &a);
    if (a == 2) {
      return 0;
    }
    if (a != 2 && a != 1) {
      printf("Ei leia os comandos direito te mandei escrever 1 ou 2 :(\n");
    }
  }
    while (count_jogadas <= 9) {
      marcar_no_tab (casas,turno);
      tabuleiro (casas);
      turno ++;
      if (vitoria_X (casas) == 1) {
        printf("O jogador [X] venceu a partida. :D\n");
        break;
      }
      if (vitoria_O (casas) == 1) {
        printf("O jogador [O] venceu a partida. :D\n");
        break;
      }
      if (count_jogadas == 9) {
          printf("Vish deu velha (;-;)\n");
        }
      count_jogadas ++;
    }
  return 0;
}
