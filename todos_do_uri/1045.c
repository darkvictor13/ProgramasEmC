#include <stdio.h>
#include <math.h>

int main () {
  float A,B,C,lado_em_ordem1,lado_em_ordem2,lado_em_ordem3,result_ang;
  scanf("%f %f %f",&A, &B, &C);
  if (A > B && A > C){
    if (B>C) {
      lado_em_ordem1 = A;
      lado_em_ordem2 = B;
      lado_em_ordem3 = C;
    } else if(C>B){
             lado_em_ordem1 = A;
             lado_em_ordem2 = C;
             lado_em_ordem3 = B;
             }
  }else if (B > A && B > C) {
    if (A>C) {
      lado_em_ordem1 = B;
      lado_em_ordem2 = A;
      lado_em_ordem3 = C;
           } else if (C>A){
             lado_em_ordem1 = B;
             lado_em_ordem2 = C;
             lado_em_ordem3 = A;
               }
  }else if ((C > A && C > B)) {
    if (B>A) {
      lado_em_ordem1 = C;
      lado_em_ordem2 = B;
      lado_em_ordem3 = A;
           } else if (A>B){
             lado_em_ordem1 = C;
             lado_em_ordem2 = A;
             lado_em_ordem3 = B;
                }
if (A == B && A == C){
  lado_em_ordem1 = A;
  lado_em_ordem2 = A;
  lado_em_ordem3 = A;
}
if (A == B && A != C){
   if (A>C){
     lado_em_ordem1 = A;
     lado_em_ordem2 = A;
     lado_em_ordem3 = C;
   }else{
     lado_em_ordem1 = C;
     lado_em_ordem2 = A;
     lado_em_ordem3 = A;
   }
}
if (B == C && A != C){
  if (A>C){
    lado_em_ordem1 = A;
    lado_em_ordem2 = C;
    lado_em_ordem3 = C;
  }else{
    lado_em_ordem1 = C;
    lado_em_ordem2 = C;
    lado_em_ordem3 = A;
  }
}
 }

if (lado_em_ordem1 > lado_em_ordem2+lado_em_ordem3) {
  printf("NAO FORMA TRIANGULO\n");
  return 0;
}

if (1>0){
    if ((pow (lado_em_ordem2,2)) + (pow (lado_em_ordem3,2)) == pow(lado_em_ordem1,2))
        printf("TRIANGULO RETANGULO\n");
    if ((pow (lado_em_ordem2,2)) + (pow (lado_em_ordem3,2)) > pow(lado_em_ordem1,2))
        printf("TRIANGULO OBTUSANGULO\n");
    if ((pow (lado_em_ordem2,2)) + (pow (lado_em_ordem3,2)) < pow(lado_em_ordem1,2))
        printf("TRIANGULO ACUTANGULO\n");
}
 if (1>0) {
    if (lado_em_ordem1 == lado_em_ordem2 && lado_em_ordem1 == lado_em_ordem3)
        printf("TRIANGULO EQUILATERO\n");
    if (lado_em_ordem1 == lado_em_ordem2 || lado_em_ordem1 == lado_em_ordem3)
        printf("TRIANGULO ISOSCELES\n");
}
return 0;
}
