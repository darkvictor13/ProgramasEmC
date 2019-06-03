#include <stdio.h>
int main (){
  int i,x;
  x = 'b';
  while(x >= 'b' && x != 'e' && x != 'i' && x != 'o' && x != 'u') {
    printf("%c\n",x);
    x ++;
  }
  return 0;
}
