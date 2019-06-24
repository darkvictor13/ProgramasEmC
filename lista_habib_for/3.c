#include <stdio.h>

int main () {
   int tanto_de_vezes_q_vo_printa,c,i;
   c = 'a';
   i = 1;
   scanf("%d",&tanto_de_vezes_q_vo_printa);
   while (i<=tanto_de_vezes_q_vo_printa){
     printf("%c\n",c);
     i++;
     c++;
   }
}
