#include "bibliotecas.h"

int retornaMaior(int a, int b){
  if(a > b){
    return a;
  }
  else{
    return b;
  }
}

int retornaMenor(int a, int b){
  if(a < b){
    return a;
  }
  else{
    return b;
  }
}


int main(){
  int vet_inicial[100], vet_final[100], i, tam, n, parada = 0;
  for(i = 0; i < 100; i++){
    vet_final[i] = -1;
    vet_inicial[i] = -1;
  }
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &vet_inicial[i]);
  }
  while(parada != 1){
    for(i = 0, parada = 0; i < 100; i++){
      if(vet_inicial[i] == -1){
        parada++;
      }
    }
  }
}


/*

int main () {
  int tamanho1,tamanho2,tamanho3;
  preenche_vet_completo (v1,&tamanho1);
  tamanho2 = (tamanho/2)+1;
  tamanho3 = (tamanho3/2)+1;
  int v1[tamanho],v2[tamanho2],v3[tamanho3];

}

int main(){
  int n, tam = 0, vet[100], vet_final[100], i, j, k = 0;
  scanf("%d", &tam);
  for(i = 0; i < tam; i++){
    scanf("%d", &vet[i]);
  }
  for(i = 0; i < 100; i++){
    vet_final[i] = -1;
  }
  while(tam != 1){
    for(i = 0, tam = 0; i < 100; i++){
      if(vet_final[i] != -1){
        tam++;
      }
    }
    for(i = 0, j = i+2; i < tam || j < tam;){
      if(i < j){
        if(vet[i] > vet[i+1]){
          vet_final[k] = vet[i];
          k++;
        }
        if(vet[i] < vet[i+1]){
          vet_final[k] = vet[i+1];
          k++;
        }
        i+=4;
      }
      if(j < i){
        if(vet[j] > vet[j+1]){
          vet_final[k] = vet[j];
          k++;
        }
        if(vet[j] < vet[j+1]){
          vet_final[k] = vet[j+1];
          k++;
        }
        j+=4;
      }
    }
  }
}
*/
