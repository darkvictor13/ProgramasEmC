#include<stdio.h>
int main () {
  int a,b,c,area_trapesio,triangulo1,triangulo2,triangulo3;
    if(a < b + c){
  triangulo1 = a+b+c;
  printf("%d\n",triangulo1);
}
          if(b <a+c){
          triangulo2 = a+b+c;
          printf("%d\n",triangulo2);
  }
                 if(c<a+b) {
                 triangulo3 = a+b+c;
                 printf("%d\n",triangulo3);
  }
                   else {
                   area_trapesio = ((a+b)/2)*c;
                   printf("%d\n",area_trapesio);
      }
     return 0;
}


// if (a<b+c || b<a+c || c < a+b);
