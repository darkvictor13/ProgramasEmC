#include <stdio.h>
int main () {
  int n,i,a;
  a=1;
  scanf("%d",&n);
  while (i<n) {
    printf("%d\n",a);
    a += 2;
    i++;
  }
}
