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

void lerPesos(FILE *arch, s_vetor *p) {
  int count;
  char aux;
  float *p_aux_float = p->vet;

  fscanf(arch,"%f%c",p_aux_float,&aux);
  //printf("test\n");
  
  for (count = 1; aux != '\n' && !feof(arch); p_aux_float++) {
    fscanf(arch,"%f%c",p_aux_float,&aux);
    //printf("test %d\n",count);
    if (aux == ' ') {
      count++;
    }
  }
  //printf("%d\n",count);
  p->tam = count;
}

int load(char file_name[], pessoa v[], int *t) {
  pessoa *inicio = v;

  FILE *arch = fopen(file_name,"r");
  if (arch == NULL) {
    printf("Nao consegui ler ;-;\n");
    return 0;//retorno para saber se foi feita a leitura
  }

  for (; !feof(arch); v++) {
    fscanf(arch,"%[^\n]%*c", v->p_dados.nome);
    lerPesos(arch,&v->p_vet);
  }
  fclose(arch);
  *t = (v - inicio);
  return 1;
}

float getMedia(s_vetor *p) {
  float soma,*ponteiro_aux,*fim;
  ponteiro_aux = p->vet;
  fim = ponteiro_aux + p->tam;

  for (; ponteiro_aux < fim; ponteiro_aux++) {
    soma += *ponteiro_aux;
  }
  return soma / (p->tam);
}

float getDp(s_vetor *p, float media) {
  float *ponteiro_vet = p->vet, *fim = (ponteiro_vet + p->tam), soma, aux;

  for (soma = 0; ponteiro_vet < fim; ponteiro_vet++) {
    aux = *ponteiro_vet - media;
    soma += pow(aux,2);
  }
  return soma/(p->tam - 1);
}

float getMaior(s_vetor *p) {
  float *ponteiro_vet = p->vet, salva_maior = *p->vet, *fim = (p->vet + p->tam);

  for (; ponteiro_vet < fim; ponteiro_vet++) {
    if (*ponteiro_vet > salva_maior) {
      salva_maior = *ponteiro_vet;
    }
  }
  return salva_maior;
}

float getMenor(s_vetor *p) {
  float *ponteiro_vet = p->vet, salva_menor = *p->vet, *fim = (p->vet + p->tam);

  for (; ponteiro_vet < fim; ponteiro_vet++) {
    if (*ponteiro_vet < salva_menor) {
      salva_menor = *ponteiro_vet;
    }
  }
  return salva_menor;
}

void calc(pessoa v[], int t) {
  pessoa *fim = (v + t);

  for (; v < fim; v++) {
    v->p_dados.valor_medio = getMedia(&v->p_vet);
    v->p_dados.desvio_padrao = getDp(&v->p_vet,v->p_dados.valor_medio);
    v->p_dados.maior_valor = getMaior(&v->p_vet);
    v->p_dados.menor_valor = getMenor(&v->p_vet);
  }
}

void printaCharNoArquivo (FILE *a,int tam, char c) {
  for (int count = 0; count < tam; count++) {
    fprintf(a,"%c",c);
  }
}

void cabecalho(FILE *arch, int tam_max_pesos) {
  fprintf(arch,"NUM ");
  fprintf(arch,"%-52s","Nome");

  for (int i = 0; i < tam_max_pesos; i++) {
    fprintf(arch,"#%d");
    if (i < 10) {
      fprintf (arch,"   ");
    }else {
      fprintf (arch,"  ");
    }
  }
  fprintf(arch,"MED   ");
  fprintf(arch,"DP  ");
  fprintf(arch,"MAX  ");
  fprintf(arch,"MIN  ");
}

int main () {
  pessoa vet_pessoas[MAX_PESSOAS];
  int num_de_pessoas;
  load("dados2.txt",vet_pessoas,&num_de_pessoas);
  testeLiCerto(vet_pessoas,num_de_pessoas);
  calc(vet_pessoas,num_de_pessoas);
  relat("saida.txt",vet_pessoas,num_de_pessoas,getMax(vet_pessoas,num_de_pessoas));
  return 0;
}
