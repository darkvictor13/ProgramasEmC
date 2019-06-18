#include <stdio.h>

int eh_primo (int n) {// 1 = numero e primo
  int i;
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
}

int main () {
  int x;
  scanf("%d",&x);
  while (x>0) {
    printf("%d\n",eh_primo(x));
    scanf("%d",&x);
  }
  printf("%d\n",eh_primo(x));
  return 0;
}
