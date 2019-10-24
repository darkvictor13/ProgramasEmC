#include <stdio.h>

void lerMat(float m[][100],int l,int c) {
  int i,j;
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      scanf("%f",&m[i][j]);
    }
  }
}

void entradaDeDados(float pXm[][100],int *m,int *p,float fXcm[][100],int *f) {
  printf("ENTRE COM A RELACAO DE PRODUTOS COM AS RESPECTIVAS QUANTIDADES DE MATERIAS PRIMAS\n");
  scanf ("%d %d",p,m);
  lerMat(pXm,*p,*m);
  printf("ENTRE COM A RELACAO DE FORNECEDORES COM OS RESPECTIVOS CUSTOS DAS MATERIAS PRIMAS\n");
  scanf ("%d",f);
  lerMat(fXcm,*f,*m);
}

float custoDeComprarComFornecedorX(float materia_prima[],int t,float custo_de_cada_uma[]) {
  float custo;
  for (int i = custo = 0; i < t; i++) {
    custo += materia_prima[i] * custo_de_cada_uma[i];
  }
  return custo;
}

void geraMatrizResposta(float mPxM[][100],int p,int m,float mFxC[][100],int f,float FxP[][100]) {
  int i,j,maior;

  if (p > m) {
    maior = p;
  }else {
    maior = m;
  }

  for (i = 0; i < f; i++) {
    for (j = 0; j < maior; j++) {
      FxP[i][j] = custoDeComprarComFornecedorX(mPxM[i],maior,mFxC[j]);
    }
  }
} 

void printaMat(float mat[][100],int l,int c) {
  int i,j;
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%7.2f",mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main () {//jXi
  float p_m[100][100],f_cun[100][100],p_f[100][100];
  int num_de_fornecedores,num_de_produtos,num_de_materias_primas; //custo = numprod
  entradaDeDados(p_m,&num_de_materias_primas,&num_de_produtos,f_cun,&num_de_fornecedores);
  geraMatrizResposta(p_m,num_de_produtos,num_de_materias_primas,f_cun,num_de_fornecedores,p_f);
  printaMat(p_f,num_de_produtos,num_de_fornecedores);
}