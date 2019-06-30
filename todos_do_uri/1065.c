#include <stdio.h>

int numeros_pares () {
  int num,i,count_par = 0;
  for (i = 0; i < 5; i++) {
    scanf("%d", &num);
    if (num % 2 == 0) {
      count_par ++;
    }
  }
  return count_par;
}

int main () {
  printf("%d valores pares\n",numeros_pares());
  return 0;
}
