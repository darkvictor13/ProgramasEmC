#include <stdio.h>

int ler( int va[], int *na){

  int i, j;
  scanf("%d", &j );

  *na = j;

  for ( i = 1; i <= *na; i++) {
    scanf("%d", &j);
    va[i] = j;
  }

  return 0;
}

int cpyvet( int vb[], int *nb, int va[], int *na){

  *nb = *na;
  int i;

  for ( i = 1; i <= *na; i++){
    vb[i] = va[i];
  }

  return 0;
}

int troca(int *a, int *b){

  int c;

  c = *a;
  *a = *b;
  *b = c;

  return 0;
}

int ordenar( int vb[], int *nb){

  int j, i, *menor;

  for( i = 1; i <= *nb - 1; i++ ){

    menor = &vb[i];

    for( j = i + 1; j <= *nb; j++ ){
      if(*menor > vb[j])
        menor = &vb[j];
    }

    troca( &vb[i], *menor);
  }

  return 0;
}

int show( int v[], int tv){

  int i;

  for (i = 1; i <= tv; i++) {
    printf("%d\n", v[i]);
  }

  return 0;
}

int main (){

  int va[1000], vb[1000], na, nb;

  printf("Ola Jusisvaldyson, indique quantos sao e dijite os numeros que deseja ordenar:\n");

  ler( va, &na);
  cpyvet( vb, &nb, va, &na);
  ordenar(vb, &nb);
  show( vb, nb);

  return 0;
}

//Jusisvaldyson
