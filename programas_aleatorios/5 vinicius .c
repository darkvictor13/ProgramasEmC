#include<stdio.h>

int main(){
  int v[20],t,i,n=0;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d",&v[i]);
  }
  for(i=1;i<t-1;i++){
    if(v[i-1]%2==0 && v[i+1]%2==0){
      n++;
    }
  }
  printf("%d",n);
  return 0;
}
