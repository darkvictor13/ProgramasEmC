#include <stdio.h>
void num_par () {
  int i;
  i = 1;
  while (i<=100){
    if (i%2 == 0) {
      printf("%d\n",i);
    }
    i++;
  }
}
int main (){
   num_par ();
  return 0;
}
