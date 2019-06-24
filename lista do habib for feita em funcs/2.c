#include <stdio.h>

void print_alfabeto (int a) {
  for (a = 'z'; a >= 'a'; a--)
    printf ("%c\n",a);
}

int main () {
  int x;
  print_alfabeto(x);
  return 0;
}
