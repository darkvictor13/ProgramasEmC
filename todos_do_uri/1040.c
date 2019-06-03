#include <stdio.h>

int aprovado_reprovado (float a,float b,float c,float d){
  float m;
  m = ((a*2)+(b*3)+(c*4)+d)/10;
  if (m >= 7)
    printf("Aluno aprovado.\n");
  else if(m < 5)
        printf("Aluno reprovado.\n");
        else return 0;
}

int aluno_de_exame (float a,float b,float c,float d,float nota_do_exame) {
  float media, media_final;
  media = ((a*2)+(b*3)+(c*4)+d)/10;
  if (media >= 7 || media < 5)
      return 0;
     else printf("Aluno em exame\n");
     scanf("%d\n",&nota_do_exame );
          media_final = (media + nota_do_exame)/2;
      if (media_final >= 4.9){
        printf("Aluno aprovado.\nMedia final: %f",media_final);
          }else printf("Aluno reprovado\n");
}

int main () {
  float A,B,C,D,X;
  scanf("%f %f %f %f",&A ,&B ,&C ,&D);
  aprovado_reprovado (A,B,C,D);
   if (aprovado_reprovado == 0)
       scanf("%f\n",&X);
       aluno_de_exame (A,B,C,D,X);
       return 0;
}
