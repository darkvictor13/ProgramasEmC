#include <stdio.h>

#define maxtam 100 

typedef struct T{
  float x;
  int n;
  int v[maxtam];
}DATA;

typedef struct {
  int a;
  char c;
  char s[maxtam];
  DATA dado;
}tipo;

void lerVet (int v[],int *n){
  scanf ("%d",n);

  int *p = (v + *n);

  for (; v < p; v++) {
    scanf("%d",v);
  }
}

void ler (tipo *rec) {
  scanf("%d %c%*c",&(*rec).a,&(*rec).c);
  scanf("%[^\n]",(*rec).s);
  scanf("%f",&(*rec).dado.x);
  lerVet((*rec).dado.v,&(*rec).dado.n);
}

void lerBonito (tipo *rec) {
  printf("entre com um inteiro e um char\n");
  scanf("%d %c%*c",&rec->a,&rec->c);
  printf("entre com uma string\n");
  scanf("%[^\n]",rec->s);
  printf("entre com um float\n");
  scanf("%f",&rec->dado.x);
  printf("entre com um tamanho de vetor e ele mesmo\n");
  lerVet(rec->dado.v,&rec->dado.n);
}

void lerComCopia () {
  tipo temp;
  scanf("%d %c%*c",&temp.a,&temp.c);
  scanf("%[^\n]",temp.s);
  scanf("%f",&temp.dado.x);
  lerVet(temp.dado.v,&temp.dado.n);

  return temp;
}

void printVet (int v[],int t) {
  int *p = (v + t);

  printf("vet = ");

  for (; v < p; v++) {
    printf("[%d]",*v);
  }
  printf("\n");
}

void show (tipo *sala) {
  printf("a = %d\nchar = %c\n",sala->a,sala->c);
  printf("string = [%s]\n",sala->s);
  printf("float = %.2f\n",sala->dado.x);
  printVet(sala->dado.v,sala->dado.n);
}

int main () {
  tipo r;

  /*scanf("%d %c%*c",&r.a,&r.c);
  scanf("%[^\n]",r.s);
  scanf("%f",&r.dado.x);
  lerVet(r.dado.v,&r.dado.n);*/
  lerBonito(&r);
  /*printf("a = %d\nchar = %c\n",r.a,r.c);
  printf("string = [%s]",r.s);
  printVet(r.dado.v,r.dado.n);*/
  show(&r);
  return 0;
}






