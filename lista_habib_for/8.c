#include <stdio.h>

void print_char (int n){
  for (int i = 0; i <= n; i++) {
    printf("%c",'a');
  }
}

int main () {
  int n,x;
  x = 0;
  scanf("%d",&n);
      while (n>x) {
        print_char (x);
        x++;
        printf("\n");
  }
  return 0;
}
