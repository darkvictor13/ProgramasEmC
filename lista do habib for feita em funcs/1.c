#include <stdio.h>

<<<<<<< HEAD
void print_alfabeto () {
  for (int a = 'a'; a <= 'z'; a++)
=======
void print_alfabeto (int a) {
  for (a = 'a'; a <= 'z'; a++)
>>>>>>> 2542b5b457e381c6a8844106004173243f5949e8
    printf ("%c\n",a);
}

int main () {
<<<<<<< HEAD
  print_alfabeto();
=======
  int x;
  print_alfabeto(x);
>>>>>>> 2542b5b457e381c6a8844106004173243f5949e8
  return 0;
}
