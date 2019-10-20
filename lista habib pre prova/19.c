#include <stdio.h>

#define maxl 100
#define maxc 100

float custoDeComprarComFornecedorX(float materia_prima[],int t,float custo_de_cada_uma[]) {
  float custo;

  for (int i = custo = 0; i < t; i++) {
    custo += materia_prima[i] * custo_de_cada_uma[i];
  }
  return custo;
}

void geraMatrizResposta(float mPxM[][maxc],int l,int c,float mFxC[][]) {

} 

int main () {
  float qnt_materia_prima[maxl][maxc],custo_unitario[maxl][maxc],fornecedor_por_produto[maxl][maxc];
  int nl_materia_prima,nc_materia_prima,num_de_fornecedores;//nc e o mesmo das 2 mat
}