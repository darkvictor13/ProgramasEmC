#include <stdio.h>
#include <math.h>

void ordem_certa (int *a, int *b, int *c){
  int temp;
if (*a < *b)
{
  temp = *a;
  *a = *b;
  *b = temp;
}
if (*b < *c)
{
  temp = *b;
  *b = *c;
  *c = temp;
}
if (*a < *b)
{
  temp = *a;
  *a = *b;
  *b = temp;
}
}

int forma_triangulo (int l1,int l2,int l3){
    if (l1 >= (l2 + l3)){
    printf("Invalido\n");
    return 1;
      }else
       return 0;
}

int igualdade_dos_lados (int MAIOR_LADO,int LADO_MEIO,int MENOR_LADO){
if(MAIOR_LADO == LADO_MEIO && MAIOR_LADO == MENOR_LADO && LADO_MEIO == MENOR_LADO) {
  printf("Valido-Equilatero\n");
  return 0;
}
if(MAIOR_LADO == LADO_MEIO || MAIOR_LADO == MENOR_LADO || LADO_MEIO == MENOR_LADO){
  printf("Valido-Isoceles\n");
  return 0;
}
if(MAIOR_LADO != LADO_MEIO && MAIOR_LADO != MENOR_LADO && LADO_MEIO != MENOR_LADO){
  printf("Valido-Escaleno\n");
  return 0;
  }
}

void eh_retangulo (int HIPOTENUSA, int CATETO1, int CATETO2){
  if ((pow (HIPOTENUSA,2)) == ((pow (CATETO1,2)) + (pow (CATETO2,2))))
  printf("Retangulo: S\n");
    else
    printf("Retangulo: N\n");
}

int main () {
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  ordem_certa (&A,&B,&C);
  if (forma_triangulo (A,B,C) == 1){
    return 0;
  }else{
    igualdade_dos_lados (A,B,C);
    eh_retangulo (A,B,C);
   }
return 0;
}
