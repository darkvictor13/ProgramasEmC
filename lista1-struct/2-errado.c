#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXP 20
#define MAXS 50

typedef struct {
  int dia;
  int mes;
  int ano;
}t_data;

typedef struct {
  int hora;
  int min;
}t_tempo;

typedef struct {
  char *nome;
  float preco;
  int qnt_total_vendas;
  float total;
}t_produto;

typedef struct {
  char *nome;
  float vendas;
}t_garcom;

typedef struct {
  t_tempo hora_entrada;
  t_tempo hora_saida;
  t_garcom *garcom;
  t_produto *prod[MAXP];
  char *mesa;
  int num_pessoas;
  int num_produtos;
  float total;
}t_comanda;

typedef struct {
  t_data data;
  double total;
}t_movimento;

void leDoArquivoProdutos (FILE *arch, t_produto *tp[], int *num_de_prod) {
  int i;
  char tmp[MAXS];

  fscanf(arch,"%s",tmp);
  for(i = 0; strcmp(tmp, "<fim>"); i++) {
    tp[i] = malloc(sizeof(t_produto));
    tp[i]->nome = malloc(strlen(tmp) + 1);
    fscanf(arch,"%d %f%*c",&tp[i]->qnt_total_vendas, &tp[i]->preco);
    fscanf(arch,"%s",tmp);
  }
  fscanf(arch, "%*c");
  *num_de_prod = i;
}

int lerComanda (char *fn, t_movimento *tm, t_comanda *tc[], int *nc) {
 FILE *arch; 
  int i;
  char tmp[MAXS];

  arch = fopen(fn, "r");
  if (!arch) {
    return 0;
  }

  fscanf(arch,"%02d/%02d/%04d%*c",&tm->data.dia, &tm->data.mes, &tm->data.ano);

  for (i = 0; !feof(arch); i++) {
    tc[i] = malloc(sizeof(t_comanda));
    tc[i]->garcom = malloc(sizeof(t_garcom));
    fscanf(arch,"[^\n]%*c",tmp);
    tc[i]->garcom->nome = malloc(strlen(tmp) + 1);
    strcpy(tc[i]->garcom->nome, tmp);
    tc[i]->garcom->vendas = 0;
    //criando a mesa
    tc[i]->mesa = malloc(MAXS);
    fscanf(arch,"%[^\n]%*c", tc[i]->mesa);
    tc[i]->mesa = realloc(tc[i]->mesa, strlen(tc[i]->mesa)+1);

    fscanf(arch, "%02d:%02d %02d:%02d", &tc[i]->hora_entrada.hora, &tc[i]->hora_entrada.min,
    tc[i]->hora_saida.hora, tc[i]->hora_saida.min);
    fscanf(arch, "%d%*c", &tc[i]->num_pessoas);

    leDoArquivoProdutos(arch, tc[i]->prod, &tc[i]->num_produtos);
    fscanf(arch, "%*c");
  }
  *nc = i;
  fclose(arch);
  return 1;
}

void printandoDados (t_comanda *tc[], int tam) {
  int i,j;

  for(i = 0; i < tam; i++) {
    printf("Garcom: %s\n", tc[i]->garcom->nome);
    printf("Mesa: %s\n", tc[i]->mesa);
    printf("Produtos consumidos: \n");

      for(j = 0; j < tc[i]->num_produtos; j++)
        printf("%s\n", tc[i]->prod[j]->nome);
  }
}

int main () {
  t_comanda *tc[10000];
  t_movimento tm;
  int nc;
    
  lerComanda("consumo2.txt", &tm, tc, &nc);
  printandoDados(tc, nc);

  return 0;
}