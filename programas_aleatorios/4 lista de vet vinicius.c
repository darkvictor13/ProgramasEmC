#include <stdio.h>

int main() {
  int v[20],t,i,n=0;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d",&v[i]);
  }
  for(i=0;i<t-1;i++){
    if(v[i+1]>v[i]){
      n++;
    }
  }
  printf("%d\n",n);
  return 0;
}
