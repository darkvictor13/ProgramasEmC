#include <stdio.h>
int main () {
int x,x1,x2,x3,x4;
scanf("%d",&x);
x1 = (x/1000);
x2 = floor (x1);
x3 = x%100;
x4 = (x2*1000)+x3;
printf("%d\n",x4);
return 0;
}
