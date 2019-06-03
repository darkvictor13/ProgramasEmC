#include<stdio.h>
int main (){
int s, t, f, resultado;
scanf("%d %d %d", &s, &t, &f);
    resultado = s+t+f;
       if(resultado>=24)
      printf("%d\n",resultado - 24);
         else if (resultado < 0)
     printf("%d\n",resultado + 24);
              else if (resultado == 0){
                   printf("0\n");
                   }else printf("%d\n",resultado);
     /*resultado -= 24;
     printf("%d\n",resultado );*/


   return 0;
}
/* if(resultado>=24){
   resultado - 24
   printf("%d\n",resultado);

   ERRADOOOOOO!!!!!!!!! */
