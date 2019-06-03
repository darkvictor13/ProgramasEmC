#include <stdio.h>
int main () {
  float n1,n2,n3,n4,n_exame,media,media_final;
  scanf("%f %f %f %f",&n1 ,&n2 ,&n3 ,&n4);
  media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
  printf("Media: %.1f\n",media);
  if (media >= 7){
    printf("Aluno aprovado.\n"); return 0;
  }else{
    if(media < 5){
      printf("Aluno reprovado.\n");return 0;
    }else{
      if (media >= 5 && media < 7)
      {
        printf("Aluno em exame.\n");
        scanf("%f",&n_exame);
        printf("Nota do exame: %.1f\n",n_exame);
        media_final = (media + n_exame)/2;
        if (media_final >= 5){
            printf("Aluno aprovado.\nMedia final: %.1f\n",media_final);
          }else printf("Aluno reprovado.\nMedia final: %.1f\n",media_final);
          return 0;
      }
    }
  }

}
