#include <stdio.h>
#include <string.h>
#include <ctype.h>

void preencheStr (char str[],char x,int t) {
  char *p = (str + t);

  for (; str < p; str++) {
    *str = x;
  }
}

int main () {
  char str[51],x;
  int tam,casos;

  for (scanf("%d",&casos); casos > 0; casos--) {
    scanf ("%d %c",&tam,&x);
    preencheStr(str,x,tam);
  }
  return 0;
}