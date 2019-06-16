// soma dos n primeiros numeros primo;
#include <stdio.h>

int primos (int n) {
  int i,x;
  i=2;

  if (n == 0 || n == 1){
  return 0;
  }

  while (i<n) {
   if (n%i == 0) {
     return 0;
   }
   i++;
 }
 return 1;
}// 0 = nao eh primo && 1 = eh primo

int soma_dos_primos (int n){
  int soma,i,x;
  soma = 0;
  i = 1;
  x = 1;
  while (x<=n) {
    primos (i);
    if (primos (i) == 1){
      soma += i;
      x++;
    }
    i++;
  }
  return soma;
}

/*int soma_dos_primos (int n){
  int soma,i;
  soma = 0;
  i = 1;
  while (n>0) {
    primos (i);
    if (primos (i) == 1){
      soma += i;
      n--;
    }
    i++;
  }
  return soma;
}*/

int main () {
  int x;
  scanf("%d",&x);
  while (x>0){
  printf("A soma dos primos = %d\n",soma_dos_primos (x));
  scanf("%d",&x);
}
  return 0;
}
