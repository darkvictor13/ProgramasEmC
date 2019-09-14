#include <stdio.h>



int main () {
  char x;
  scanf("%c ", &x);
  if (x == 'v') {
    //setbuf (stdin,NULL);
    scanf("%c", &x);
    if (x == 'a') {
      printf("ave\n");
    }else {
      printf("mamifero\n");
    }

  }
  return 0;
}
