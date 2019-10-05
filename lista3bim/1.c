#include <stdio.h>

void preenche_vetores (int *v1,int *v2,int *t) {
  int i;
  scanf ("%d",t);
  for (i = 0; i < *t; i++) {
    scanf ("%d %d",&v1[i],&v2[i]);
  }
}

int num_aparece_no_vet (int num,int *v,int t) {
  int i;

  for (i = 0; i < t; i++,v++) {
    if (*v == num){
      return 1;
    }
  }
  return 0;
}


int vetores_sao_iguais (int *v1,int *v2,int t) {
  int i,x;
   for (i = 0; i < t; i++,v1++) {
     x = num_aparece_no_vet (*v1,v2,t);
     if (!x){
       return 0;
     } 
   }
  return 1;
}

int main () {
  int v1[100],v2[100],t,resp;
  preenche_vetores(v1,v2,&t);
  resp = vetores_sao_iguais (v1,v2,t);
  if (resp) {
    printf ("sao iguais\n");
  }else {
    printf ("nao sao iguais\n");
  }
  return 0;
}
