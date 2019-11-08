#include <stdio.h>
#include <math.h>

int main () {
  int num,divisor,modulo_do_divisor,i;
  scanf("%d %d",&num,&divisor);
  if (num < 0) {
    if (divisor < 0) {
      for (i = 1; (i * divisor) > num; i++) {
        ;
      }
      printf("%d %d\n",i,num - (i * divisor));
    }else{
      for (i = -1;(i * divisor) > num;i--) {
        ;
      }
      printf("%d %d\n",i,num - (i * divisor));
    }
    
  }else {
    printf("%d %d\n",(num / divisor), (num % divisor));
  }
  return 0;
}