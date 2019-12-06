#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int load(char fn[], char *p[], int *n) {
  int i;
  FILE *arch = fopen (fn,"r");
  if (arch == NULL) {
    printf("Erro 1\n");
    return 1;
  }

  for (i = 0; !feof(p); i++) {
    p[i] = malloc(100);
    fscanf(arch,"[^\n]%*r",p[i]);
    p[i] = realloc(p[i], 1 + strlen(p[i]));
  }
  printf("%d\n",i);
  *n = i;
  fclose(arch);
  return 0;
}

void printaDados (char *p[], int tam) {
  char *fim = (p + tam);
  puts(*p);
  for (; p < fim; p++) {
    puts(*p);
  }
}

int main () {
  char *v[100];
  int n;
  load("nomes.txt",v,&n);
  //relat("relat.txt",v,n);
  return 0;
}