#include <stdio.h>
int main () {
  int segA,h, min, seg;
  scanf("%d",&segA );
  h = segA / 3600;
  min = (segA % 3600) / 60;
  seg = segA%60;
  printf("%02d:%02d:%02d\n", h, min, seg);
  return 0;
}
