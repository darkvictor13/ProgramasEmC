#include <stdio.h>

#define TAM_NAME 50

typedef struct {
  int codigo;
  char nome[TAM_NAME];
  char email[TAM_NAME];
}cliente;

typedef struct {
  int codigo;
  int quantidade;
  float preco;
  char descricao[TAM_NAME];
}produto;

cliente todos_os_clientes[1000];
produto todos_os_produtos[1000];

void menuInicial() {

}

void escolhendoAOpcao(int *o) {
  printf("Informe sua opcao e tecle <enter>: ");
  scanf("%d",o);
  while (*o > 1 || *o < 12) {
    printf("Opcao invalida.");
    printf("Informe sua opcao e tecle <enter>: ");
    scanf("%d",o);
  }
}

void cadastroDeClientes(cliente v[]) {
  int i;
  char resposta;

  for (i = 0; resposta != 'N'; i++) {
    v[i].codigo = i;
    scanf("%[^\n]%*c",v[i].nome);
    scanf("%[^\n]%*c",v[i].email);
    printf("Deseja cadastrar mais algum cliente?(S/N)");
    scanf("%c",&resposta);
  }
}


int main () {
  int opcao;
  escolhendoAOpcao(&opcao);
  while (opcao != 12) {

  }
  return 0;
}