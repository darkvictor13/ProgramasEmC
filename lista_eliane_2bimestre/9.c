#include <stdio.h>

void manipular_char(char ch,int n){
  int i;
  for (i = 0; i < n; i++) {
    printf("%c",ch);
    ch ++;
  }
}

int main () {
  int count; char X;
  scanf("%d %c",&count,&X);
  while (count>=0) {
    manipular_char (X,count);
    printf("\n");
    scanf("%d %c",&count,&X);
  }
  return 0;
}
