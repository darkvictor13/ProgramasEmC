#include <stdio.h>

int main(){
  int i,n;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    if (('a'+i)%2 == 1) {
      printf("%c\n",'a'+i);
    }else {printf("%c\n",'A'+i);}
  }
  return 0;
}
