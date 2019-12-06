#include <stdio.h>

#define clear() printf("\033[H\033[J")
#define vermelhoclaro(texto) printf("\33[1;31m %s \33[0m",texto)

//Estrutura do cliente//
struct cliente{
  char nome[200];
  char email[50];
  int codigoc;
};
//Estrutura do produto//
struct produtos{
  int quantidade;
  char descricao[50];
  int codigoP;
  float precounitario;
};
//leitura do arquivo dos clientes//
int leitura_arquivobc(struct cliente *vc) {
    int i=0;
    FILE *pa;
    char *nome = "Clientes.dat";
    int membros,resultado=0;
    pa=fopen(nome,"rb+");
    if(pa != NULL){
    while(1)
		{
			struct cliente p;
			// fread ler os dados
			// retorna a quantidade de elementos lidos com sucesso
			size_t r = fread(&p, sizeof(struct cliente), 1, pa);
			// se retorno for menor que o count, então sai do loop
			if(r < 1)
				break;
			else
				vc[i++] = p;
		}
		fclose(pa); // fecha o arquivo
                printf("\n\nArquivo binario de clientes carregado com sucesso! Total de elementos: %d\n", i);
		return i;
        fclose(pa);
    } 
    else
	return 0;
}

void cadastroc(struct cliente *vc, int i,int cont2){
    printf("---OPCAO CADASTRAR CLIENTE--- \n");
    printf("Digite o nome: ");
    fflush(stdin);
    __fpurge(stdin);
    gets(vc[i].nome);
    printf("Digite o email: ");
    fflush(stdin);
    __fpurge(stdin);
    gets(vc[i].email);
    vc[i].codigoc=cont2;
    printf("Codigo: %d \n", vc[i].codigoc );
}

void impressaoc (struct cliente *vc, int j){
  int i;
    for(i=0;i<j;i++){
	  printf( "Codigo do cliente: %d\n",vc[i].codigoc);
    printf( "Nome do cliente: %s\n",vc[i].nome);
    printf( "Email do cliente: %s\n",vc[i].email);
   }
}
//leitura do arquivo dos produtos//
int leitura_arquivobp (struct produtos *vp) { 
    int i=0;
    FILE *pa;
    char *nome = "produtos.dat";
    int membros,resultado=0;
    pa=fopen(nome,"rb+");
    if(pa != NULL){
    while(1)
		{
			struct produtos p;
			// fread ler os dados
			// retorna a quantidade de elementos lidos com sucesso
			size_t r = fread(&p, sizeof(struct produtos), 1, pa);
			// se retorno for menor que o count, então sai do loop
			if(r < 1)
				break;
			else
				vp[i++] = p; 
		}
		fclose(pa); // fecha o arquivo
                printf("\n\nArquivo binario de clientes carregado com sucesso! Total de elementos: %d\n", i);
		return i;
        fclose(pa);
    } 
    else
	return 0;
}

void cadastrop (struct produtos *vp, int i,int cont2){ 
    printf("---OPCAO CADASTRAR PRODUTOS--- \n");
    printf("Digite a descricao: ");
    fflush(stdin);
    __fpurge(stdin);
    gets(vp[i].descricao);  
      printf("Digite o preço: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%f",&vp[i].precounitario); 
    printf("Digite a quantidade: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%d",&vp[i].quantidade);   
    vp[i].codigoP=cont2;     
    printf("Codigo: %d \n", vp[i].codigoP );
}

void impressaop (struct produtos *vp, int j){ 
   int i;
       for(i=0;i<j;i++){
	        printf( "Codigo do produto: %d\n",vp[i].codigoP);
          printf( "descricao do produto: %s\n",vp[i].descricao);
          printf( "Preço do produto: %f\n",vp[i].precounitario);
          printf( "quantidade do produto: %d\n",vp[i].quantidade);

       }       
}

/////////////////////////////////////////////////////////////


void menu(){
  printf("--------------Trabalho Final de Programacao-UNILA--------------\n-----------------------Menu Principal--------------------------\nAlunos: Karine Miranda da Silva e Jonatas de Oliveira Melo\n\n");
  clear();
  printf("1) Cadastro de Clientes\n");
  printf("2) Consulta dados de clientes dado um código\n");
  printf("3) Consulta dados de clientes dado um nome\n");
  printf("4) Altera e-mail do cliente dado um código\n");
  printf("5) Cadastro de Produtos\n");
  printf("6) Consulta dados de produto dado um código\n");
  printf("7) Consulta dados de produtos dado uma descricao\n");
  printf("8) Registro de entrada de Produtos\n");
  printf("9) Registro de venda (saída) de Produtos\n");
  printf("10)Relatorio de Clientes\n");
  printf("11)Relatorio de Produtos\n");
  printf("12)Sair do Programa\n\n");
}

int main(void) {
  struct cliente vetorcliente[200];
  int cont;
  cont=leitura_arquivobc(vetorcliente);
  int op;
  op=1;
  struct produtos vetorprodutos[200];
  int contp;
  contp=leitura_arquivobp(vetorprodutos);

  while (op!=12){
  menu();
  vermelhoclaro("Digite a opcao: ");
  scanf("%d",&op);
  char resposta;
  switch (op)
  {

  case 1:
    do{
      
        cadastroc(vetorcliente, cont, cont+1);
        printf("quer cadastrar outro?");
        scanf("%s",&resposta);
        if (resposta=='s')
            cont++;
    }while(resposta!='n');


  break; 

  case 2:

  case 3:

  case 4:

  case 5:
    do{
        cadastrop(vetorprodutos, contp, contp+1);
        printf("quer cadastrar outro?");
        scanf("%s",&resposta);
        if (resposta=='s')
            contp++;
    }while(resposta!='n');

  break;


  case 6:

  case 7:

  case 8:

  case 9: 

  case 10:

  case 11:

  case 12:
  impressaoc (vetorcliente, cont+1);
  impressaop (vetorprodutos, contp+1);
  break;

  

  
  return 0;
}}}