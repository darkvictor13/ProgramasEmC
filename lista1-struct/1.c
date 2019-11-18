#include <stdio.h>
#include <math.h>

#define MAX_PESSOAS 200
#define MAX_PESOS 100
#define MAX_LETRAS_NOME 51

typedef struct {
  float vet[MAX_PESOS];
  int tam;
}s_vetor;

typedef struct {
  char nome [MAX_LETRAS_NOME];
  float valor_medio;
  float desvio_padrao;
  float maior_valor;
  float menor_valor;
}s_dados;

typedef struct {
  s_dados p_dados;
  s_vetor p_vet;
}pessoa;

void lerPesos (FILE *arch,s_vetor *p) {
  int count;
  char aux;
  float *p_aux_float = p->vet;

  fscanf(arch,"%f%c",p_aux_float,&aux);
  
  for (count = 1; aux != '\n' && !feof(arch); p_aux_float++) {
    fscanf(arch,"%f%c",p_aux_float,&aux);
    if (aux == ' ') {
      count++;
    }
  }

  p->tam = count;
}

int load (char file_name[],pessoa v[],int *t) {
  pessoa *inicio = v;

  FILE *arch = fopen(file_name,"r");
  if (arch == NULL) {
    printf("Nao consegui ler ;-;\n");
    return 0;//retorno para saber se foi feita a leitura
  }

  for (; !feof(arch); v++) {
    fscanf(arch,"%[^\n]%*c", v->p_dados.nome);
    lerPesos(arch,&(*v).p_vet);
  }
  fclose(arch);
  *t = (v - inicio);
  return 1;
}

/*void calc (pessoa v[],int t) {
  pessoa *fim = (v + t);

  for (; v < fim; v++) {
    v->p_dados.valor_medio = getMedia(&(*v).p_vet);
    v->p_dados.desvio_padrao = getDp(&(*v).p_vet,v->p_dados.valor_medio);
    v->p_dados.maior_valor = getMaior(&(*v).p_vet);
    v->p_dados.menor_valor = getMenor(&(*v).p_vet);
  }
}*/

void printVet(s_vetor *p) {
  float *fim = (p->vet + p->tam);
  float *p_aux = p->vet;

  for (; p_aux < fim - 1; p_aux++) {
    printf("%.1f ",*p_aux);
  }
  printf("%.1f\n",*p_aux);
}

void testeLiCerto(pessoa v[],int t) {
  pessoa *fim = (v + t);

  for (; v < fim; v++) {
    printf("%s\n",v->p_dados.nome);
    printVet(&(*v).p_vet);
  }
}

int main () {
  pessoa vet_pessoas[MAX_PESSOAS];
  int num_de_pessoas;
  load("dados.txt",vet_pessoas,&num_de_pessoas);
  testeLiCerto(vet_pessoas,num_de_pessoas);
  //calc(vet_pessoas,num_de_pessoas);
  //relat("saida.txt",vet_pessoas,num_de_pessoas,getMax(vet_pessoas,num_de_pessoas));
  return 0;
}
