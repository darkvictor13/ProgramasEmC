#include <math.h>
#include <stdio.h>
int main () {
  int x,y,z,maior_deles;
  scanf("%d%d%d",&x,&y,&z);
  maior_deles = (x>y)?x:(y>z)?y:z;
  //maior_deles = (x > y)?(x > z ? x : z): (y > z ? y : z);
  printf("o maior deles = %d\n",maior_deles);
  return 0;
}
