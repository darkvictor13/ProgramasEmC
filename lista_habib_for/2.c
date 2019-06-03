#include <stdio.h>

int main () {
  int c;
  c = 'z';
  while (c>='a'&& c<='z'){
    printf("%c\n",c);
    c --;
  }
}
