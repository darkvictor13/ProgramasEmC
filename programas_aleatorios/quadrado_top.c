#include <stdio.h>

void print_char (int i, char c) {
  int j=1;
     while (j <= i) {
      printf("%c", c);
      j++;
    }
}
int main () {
  int altura,comprimento,count_increment,count_dec; char jusisvaldison;
  scanf("%d %d %c",&altura,&comprimento,&jusisvaldison);

    while (altura > 0){
        print_char (comprimento,jusisvaldison);
        printf("\n");
        altura--;
      }
  }
