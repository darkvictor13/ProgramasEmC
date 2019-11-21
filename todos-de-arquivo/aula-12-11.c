#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
  char modelo[MAX];
  char tipo[MAX];
  float preco;
  float IPVAS [3];    //0=PR, 1=RJ, 2=SP
} Veiculo;

int LerDados (Veiculo *vet, int *num) {
  FILE *arq;

  *num = 0;

  arq = fopen("veiculos.txt", "r");
  if(arq == NULL){
    printf("Nao foi possivel abrir o arquivo\n");
    return 0;
  }
  while(!feof(arq)) {
    fscanf(arq, "%[^\n]%*c", vet->modelo);
    fscanf(arq, "%[^\n]%*c", vet->tipo);
    fscanf(arq, "%f%*c", &vet->preco);
    vet++;
    (*num)++;
  }
  fclose(arq);
  return 1;
}

void ImprimeDados (Veiculo *vet, int num){
  int i;
  printf("Dados do veiculo\n");

  for(i = 0; i < num; i++, vet++){
    printf("%s\n",vet->modelo);
    printf("%s\n",vet->tipo);
    printf("%.2f", vet->preco);
    printf("\n");
  }
}

void ImprimeDadosV2 (Veiculo vet[], int num) {
  Veiculo *fim = (vet + num);

  for (; vet < fim; vet++) {
    printf("%s\n",vet->modelo);
    printf("%s\n",vet->tipo);
    printf("%.2f", vet->preco);
    printf("\n");
  }
}


int LerAliquotas (float aliq[3][4]) {
  FILE *arq;
  int i = 0;
  
  arq = fopen("aliquotas.txt", "r");
  if(arq == NULL){
    printf("Nao foi possivel abrir o arquivo\n");
    return 0;
  }

  while(!feof(arq)) {
    fscanf (arq, "%f %f %f %f", &aliq[i][0],&aliq[i][1],&aliq[i][2],&aliq[i][3]);
    i++;
  }
  fclose(arq);
  return 1;
}

void CalcIPVA (Veiculo vet[MAX], int tam, float aliq[3][4]) {
  int i, j;
  //percorre o vetor de veículos.
  for (i = 0; i < tam; i++) {
    for (j = 0; j<3; j++ )
    if (!strcmp(vet[i].tipo,"CARRO")) {
      vet[i].IPVAS[j] = vet[i].preco * aliq [j][0] / 100.0;
    }
    else
    if(!strcmp(vet[i].tipo,"ONIBUS")) {
      vet[i].IPVAS[j] = vet[i].preco * aliq [j][1] / 100.0;
    }
    else
      if(!strcmp(vet[i].tipo,"MOTOCICLETA")) {
      vet[i].IPVAS[j] = vet[i].preco * aliq [j][2] / 100.0;
    }
    else
    vet[i].IPVAS[j] = vet[i].preco * aliq [j][3] / 100.0;
  }
}

int ImprimeIPVAS(Veiculo *vet, int num) {
  int i;
  FILE *arq;
  
  arq = fopen("relatIPVA.txt", "w");
  if(arq == NULL){
    printf("Nao foi possivel abrir o arquivo\n");
    return 0;
  }
  
  fprintf(arq,"%s","Tabela de IPVA por Estado\n");
  //printf("MODELO\t\tPARANA\t\tRIO DE JANEIRO\t\tSAO PAULO");
  fprintf(arq,"%-25s%-15s%-16s%-16s\n","MODELO","PARANA","RIO DE JANEIRO","SAO PAULO");
  for(i = 0; i < num; i++){
    fprintf(arq,"%-25sR$%8.2f\tR$%8.2f\tR$%8.2f\n", vet[i].modelo, vet[i].IPVAS[0], vet[i].IPVAS[1], vet[i].IPVAS[2]);
  }
  fclose(arq);
  return 1;
}

int main () {
  Veiculo vet1[MAX];
  float aliquotas[3][4];
  int n;
  
  LerDados(vet1, &n);
  //ImprimeDados(vet1, n);
  LerAliquotas(aliquotas);
  CalcIPVA(vet1,n,aliquotas);
  ImprimeIPVAS(vet1,n);
  return 0;
}