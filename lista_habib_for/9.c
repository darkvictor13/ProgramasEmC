#include <stdio.h>

void print_char (int n){
  int x = 0;
  for (int i = 0; i < n; i++) {
    if (x+'a' <= 'c')
    printf("%c",('a'+x));
    else if (x+'a' > 'c'){
      printf("%c\n",'a');
      x -= 3;
  }
    x++;
  }
}

int main () {
  int x,i,y;
  i = 0;
  y = 1;
  scanf("%d",&x);
  while (x>i){
  print_char (y);
  i++;
  y++;
  printf("\n");
}
  return 0;
}
