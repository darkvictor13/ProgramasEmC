#include <stdio.h>

int main(){
  int i, j, k, l, m;
  scanf("%d\n", &k);
  while( k != 0 ){
    for( i = 0, m = 1; i < k; i++){

      for( j = 0, l = 1; j < k; j++){
            printf("%d\t", l);
            if( l < m )
              l++;
            else
              l--;

      }
      if( i < k/2 )
        m++;
      else
        m--;
      printf("\n");
    }
    scanf("%d\n", &k);
  }
  return 0;
}
