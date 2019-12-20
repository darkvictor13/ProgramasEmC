#include <stdio.h>

int main () {
  int j,c,i;
  c = 'z';
  i = 0;
  scanf("%d", &j);
  while (i < j){
    printf("%c\n",c);
    i++;
    c--;
  }
  printf("o programa ficou em loop %d vezes\n",i);
}
