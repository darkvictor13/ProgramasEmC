#include <stdio.h>

int main () {
  int lesmas[500],t,i,marcado;

  while (scanf("%d",&t) != EOF) {

    for (i = 0; i < t; i++) {
      scanf("%d",&lesmas[i]);
    }

    marcado = lesmas[0];

    for (i = 1; i < t; i++) {
      if (lesmas[i] > marcado) {
        marcado = lesmas[i];
      }
    }

    if (marcado < 10) {
      printf("%d\n",1);
    }else if (marcado >= 10 && marcado < 20) {
      printf("%d\n",2);
    }else{
      printf("%d\n",3);
    }
  }
  return 0;
}