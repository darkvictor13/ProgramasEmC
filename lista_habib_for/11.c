#include<stdio.h>
int main(){
  int i,j,n;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    for(j=n; j>i+1;j--){
      printf(" " );
    }
    for(j=0; j<i+1; j++){
      printf("a");
    }
    printf("\n" );
  }
  return 0;
}
