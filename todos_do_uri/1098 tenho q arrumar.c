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


void sequencia1 () {
  double i,j;int count = 0,auxI,auxJ;
  for (i = 0,j = 1; i <= 2; i += 0.2,j += 0.2) {
    while (count <= 2) {
      auxI = (int)i;
      //printf("%d\n", auxI);
      auxJ = (int)j;
      //printf("%d\n", auxJ);
      if (i == 0.0 || i == 1.0 || i >= 2.0) {
        printf("I=%d J=%d\n",auxI,auxJ);
      }else  {
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
  sequencia1 ();
  return 0;
}
