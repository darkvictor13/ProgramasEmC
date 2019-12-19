#include <stdio.h>

typedef struct{
    int n;
}vaiqda;


int main(){
    vaiqda *kk[100];
    kk[0] = malloc(sizeof(vaiqda));
    printf("%d",kk[0]->n);
}