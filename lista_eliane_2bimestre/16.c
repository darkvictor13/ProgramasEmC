#include <stdio.h>

int inv_num (int n) {
  int aux = 0;
  while (n>0){
    aux = aux * 10 +n % 10;
    n /= 10;
  }
  return aux;
}

void Super_Next (int x) {
  for (int i = inv_num (x); i > 0; i/= 10) {
    /* code */
  }

}

int main () {



  return 0;
}
