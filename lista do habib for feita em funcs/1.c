#include <stdio.h>

void print_alfabeto (int a) {
  for (a = 'a'; a <= 'z'; a++)
    printf ("%c\n",a);
}

int main () {
  int x;
  print_alfabeto(x);
  return 0;
}
