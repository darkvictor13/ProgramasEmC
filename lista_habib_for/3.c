#include <stdio.h>

int main () {
   int j,c,i;
   c = 'a';
   i = 1;
   scanf("%d",&j);
   while (i<=j){
     printf("%c\n",c);
     i++;
     c++;
   }
}
