#include <stdio.h>

int main(){
    int casos, n, mult, soma = 0, i = 1, j, qntd;
    scanf("%d", &casos);
    while(casos > 0){
      int i = 1;
      scanf("%d", &n);
      mult = n*n*n;
      while(soma < mult){
        //printf("%d\n", i);
        for(j = i, soma = 0, qntd = n; qntd > 0; qntd--, j+=2){
          soma += j;
                      //printf("%d \n", soma);
        }
        if(soma == mult){
          for(j = i, qntd = n; qntd > 0; qntd--, j+=2){
            printf("%d ", j);
          }
          printf("\n");
        }
        i += 2;
      }
      casos--;
      printf("%d\n", casos);
    }
    return 0;
}
