#include <stdio.h>
int main (){
  int i,x,n;
  scanf("%d",&n);
  x = 'b';
  i = 1;
  while(n>=i &&x >= 'b') {
    if (x != 'e' || x != 'i' || x != 'o' || x != 'u'){
    printf("%c\n",x);
    x ++;
    i++;
  }
}
  return 0;
}
