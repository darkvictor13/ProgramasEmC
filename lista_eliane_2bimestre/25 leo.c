#include <stdio.h>

void calcula_impares_e_pares(int vet[], int tam, int *par, int *impar){
    int aux;
    for(int i = 0; i < tam; i++){
      while(vet[i] > 0){
        aux = vet[i] % 10;
        if(aux % 2 == 0){
          *par += 1;
        }
        if(aux % 2 == 1){
          *impar += 1;
        }
        vet[i] = vet[i] / 10;
      }
    }
}

void printa_vet(int vet[], int tam){
  for(int i = 0; i < tam; i++){
    printf("[%d] ", vet[i]);
  }
}


void preenche_vetor(int vet[], int tam){
  for(int i = 0; i < tam; i++){
    scanf("%d", &vet[i]);
  }
}

int main(){
  int vet[100], tam, i, par = 0, impar = 0;
  scanf("%d", &tam);
  preenche_vetor(vet, tam);
  calcula_impares_e_pares(vet, tam, &par, &impar);
  printf("%d %d", par, impar);
  return 0;
}
