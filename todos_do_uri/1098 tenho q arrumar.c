#include <stdio.h>

void sequencia () {
  double i,j;int count = 0;
  for (i = 0,j = 1; i <= 2; i += 0.2,j += 0.2) {
    while (count <= 2) {
      if ((i - (int)i) == 0 && (j - (int)j) == 0) {
        printf("I=%d J=%d\n",(int)i ,(int)j);
      }else if ((i - (int)i) != 0 && (j - (int)j) == 0) {
        printf("I=%.1lf J=%d\n",i,(int)j);
      }else if ((i - (int)i) == 0 && (j - (int)j) != 0) {
        printf("I=%d J=%.1lf\n",(int)i,j);
      }else if ((i - (int)i) != 0 && (j - (int)j) != 0) {
        printf("I=%.1lf J=%.1lf\n",i,j);
      }
      count ++;
      j++;
    }
    j -= 3;
    count = 0;
  }
}

int main () {
  sequencia ();
  return 0;
}
