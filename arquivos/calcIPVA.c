#include<stdio.h>
#define MAX 50

typedef struct{
    char modelo[MAX];
    char tipo[MAX];
    float preco;
}Veiculo;

void lerDados(Veiculo veic[MAX]){
int i;

printf("Leitura dos dados\n\n");
for(i=0;i<3;i++){
    printf("Digite o modelo do veiculo: ");
    scanf("%[^\n]%*c", &veic[i].modelo);

    printf("Digite o tipo do veiculo: ");
    scanf("%[^\n]", &veic[i].tipo);

    printf("Digite o valor do veiculo: R$");
    scanf("%f%*c", &veic[i].preco);
    printf("\n");
}
}

void imprimeDados(Veiculo veic[MAX]){
int i;

printf("\n\nImpressao de dados\n\n");
for(i=0;i<3;i++){
    printf("Digite o modelo do veiculo: ");
    puts(veic[i].modelo);
    printf("Digite o tipo do veiculo: ");
    puts(veic[i].tipo);
    printf("Digite o valor do veiculo: R$ ");
    printf("%.2f\n",veic[i].preco);
    printf("\n");
}
}

int main(){
    Veiculo v[MAX];
    lerDados(v);
    imprimeDados(v);
return 0;
}
