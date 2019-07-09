#include <stdio.h>

void tabuada (int n) {
  int i;
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n",i,n,(n * i));
  }
}

int main () {
  int num;
  scanf("%d", &num);
  tabuada (num);
  return 0;
}
