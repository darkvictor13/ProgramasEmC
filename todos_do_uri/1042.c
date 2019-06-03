#include <stdio.h>

void ifchato (int x, int y, int z) {

  if (x > y && x > z){
    if (y>z) {
             printf("%d\n",z);printf("%d\n",y);printf("%d\n",x);
           } else if(z>y){
               printf("%d\n",y); printf("%d\n",z);printf("%d\n",x);
             }
  }else if (y > x && y > z) {
    if (x>z) {
            printf("%d\n",z ); printf("%d\n",x);printf("%d\n",y);
          } else if (z>x){
               printf("%d\n",x); printf("%d\n",z );printf("%d\n",y);
               }
  }else if ((z > x && z > y)) {
    if (y>x) {
             printf("%d\n",x); printf("%d\n",y);printf("%d\n",z);
           } else if (x>y){
               printf("%d\n",y); printf("%d\n",x);printf("%d\n",z);
                }
      }
}

int main () {
   int x,y,z;
   scanf("%d %d %d",&x,&y,&z);
   ifchato (x,y,z);
   printf("\n%d\n%d\n%d\n",x,y,z);
   return 0;
}
