#include <stdio.h>

void print_char (int i, char c) {
  int j=1;
     while (j <= i) {
      printf("%c", c);
      j++;
    }
}
int main () {
  int numero_linhas,count_increment,count_dec; char jusisvaldison;
  scanf("%d %c",&numero_linhas,&jusisvaldison);

  while (numero_linhas > 0){
    count_dec = numero_linhas-1;
    count_increment = 1;
    while (0 <= count_dec ){
        print_char(count_dec, ' ');
        print_char (count_increment,jusisvaldison);
        printf("\n");
        count_increment += 2;
        count_dec --;
      }
    scanf("%d %c",&numero_linhas,&jusisvaldison);
  }
}
