#include <stdio.h>
int main () {
  int i,n,a;
  scanf("%d",&n);
  i=0;
  a=0;
  while (i < n){
    a += i;
    printf("%d\n",a);
    i++;
  }
  return 0;
}
