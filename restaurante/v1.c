#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXP 20
#define MAXS 50

typedef struct {
    int dia, mes, ano;
}TDATA;

typedef struct {
    int h, m;
}THORA;

typedef struct {
    char *descricao;
    float preco, total;
    int qtvenda;
}TPRODUTO;

typedef struct {
    char *nome;
    float vendas;
}TGARCOM;

typedef struct {
    THORA he, hs;
    TGARCOM *garcom;
    TPRODUTO *prod[MAXP];
    char *mesa;
    int numpes, numprod;
    float total;
}TCOMANDA;

typedef struct {
    TDATA data;
    double total;
}TMOVIMENTO;

void loadprodutos (FILE *f, TPRODUTO *tp[], int *ni) {
    int i;
    char tmp[MAXS];
    
    fscanf(f, "%s", tmp);
    for(i = 0; strcmp(tmp, "<fim>"); i++) {
        tp[i] = malloc(sizeof(TPRODUTO));
        tp[i]->descricao = malloc(strlen(tmp) + 1);
        strcpy(tp[i]->descricao, tmp);
        fscanf(f, "%d %f%*c", &tp[i]->qtvenda, &tp[i]->preco);
        fscanf(f, "%s", tmp);
    }
    //fscanf(f,"%*c");
    *ni = i;  
}

int loadcomandas (char *fn, TMOVIMENTO *tm, TCOMANDA  *tc[], int *nc) {
    FILE *f; 
    int i;
    char tmp[MAXS];

    //abrir o arquivo para leitura
    f = fopen(fn, "r");
    //verifica se foi possível abrir o arquivo
    if(!f) return 1;
    
    fscanf(f, "%02d/%02d/%04d%*c", &tm->data.dia, &tm->data.mes, &tm->data.ano);
    for(i = 0; !feof(f); i++) {
        tc[i] = malloc(sizeof(TCOMANDA));
        
        //criaçao de uma estrutura garcom
        tc[i]->garcom = malloc(sizeof(TGARCOM));
        fscanf(f, "%[^\n]%*c", tmp);
        tc[i]->garcom->nome = malloc(strlen(tmp) + 1);
        strcpy(tc[i]->garcom->nome, tmp);
        tc[i]->garcom->vendas = 0;
        
        //criaçao de uma mesa
        tc[i]->mesa = malloc(MAXS);
        fscanf(f, "%[^\n]%*c", tc[i]->mesa);        tc[i]->mesa = realloc(tc[i]->mesa, strlen(tc[i]->mesa) + 1);
        
        //leitura das horas de entrada e saida
        fscanf(f, "%02d:%02d %02d:%02d", &tc[i]->he.h, &tc[i]->he.m, &tc[i]->hs.h, &tc[i]->hs.m); 
        fscanf(f, "%d%*c", &tc[i]->numpes);
        
        loadprodutos(f, tc[i]->prod, &tc[i]->numprod);
        fscanf(f, "%*c");
    }
    *nc = i;
    fclose(f);
    return 0;
}

void printdados (TCOMANDA *tc[], int nc) {
    int i, j;

    for(i = 0; i < nc; i++) {
        printf("Garcom: %s\n", tc[i]->garcom->nome);
        printf("Mesa: %s\n", tc[i]->mesa);
        printf("Produtos consumidos: \n");
        for(j = 0; j < tc[i]->numprod; j++)
            printf("%s %d %.2f\n", tc[i]->prod[j]->descricao, tc[i]->prod[j]->qtvenda, tc[i]->prod[j]->preco);
    }
}

int main() {
    TCOMANDA *tc[10000];
    TMOVIMENTO tm;
    int nc;
    
    loadcomandas("consumo.txt", &tm, tc, &nc);
    printdados(tc, nc);
    
return 0;
}