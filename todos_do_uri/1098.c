#include <stdio.h>

int main () {
  float i,j,count;
  for (i = 0; i < 2; i += 0.2) {
    for (count = 1; count <= 3;j++,count++) {
      j = i + count;
      if (!i || i == 1) {
        printf("I=%.0f J=%.0f\n",i,j);
      }else if (j == 3 || j == 4 || j == 5) {
        printf("I=%.0f J=%.0f\n",i,j);
      }else {
      printf("I=%.1f J=%.1f\n",i,j);
      }
    }
  }
  for (j = 3; j <= 5; j++) {
    printf("I=2 J=%.0f\n",j);
  }
  return 0;
}