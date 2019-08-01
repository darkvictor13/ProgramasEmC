#include <stdio.h>

void PUM (int num) {
  int i = 1,linhas;
  while (num > linhas) {
    for (; 1 ; i++) {
      if (i % 4 == 0) {
        printf("PUM\n");
        i++;
        linhas ++;
        break;
      }else {
        printf("%d ", i);
      }
    }
  }
}

int main () {
  int n;
  scanf("%d", &n);
  PUM (n);
  return 0;
}
