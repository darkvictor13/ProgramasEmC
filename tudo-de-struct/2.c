#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct{
  char modelo[MAX];
  char tipo[MAX];
  float preco;
}Veiculo;


void LerDados01(Veiculo vet[MAX], int *num){
  int i;

  printf("Quantos dados deseja inserir? "); 
  scanf("%d%*c",num);
  for(i=0;i<*num;i++){
    scanf("%[^\n]%*c",vet[i].modelo);
    scanf("%[^\n]",vet[i].tipo);
    scanf("%f%*c",&vet[i].preco);
  }
}

void ImprimeDados(Veiculo vet[MAX],int num){
  int i;
  printf("Dados do veiculo\n");
  
  for(i=0;i<num;i++){
    puts(vet[i].modelo);
    puts(vet[i].tipo);
    printf("%.2f\n",vet[i].preco);
  }
}

int main(){
  Veiculo vet1[MAX];
  int n;

  LerDados01(vet1,&n);
  ImprimeDados(vet1,n);
  
  return 0;
}