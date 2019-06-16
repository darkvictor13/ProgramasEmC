#include <stdio.h>


int main () {
  char ch;int i;
  for (i = 0; i <= 5; i++) {
    printf("Digite o %do Caracter :",i+1);
    scanf("%c",&ch);
    //scanf(" %c",&ch);
    //setbuf (stdin,NULL);
    //fflush (stdin);  so p windows
    printf("\n");
  }
  return 0;
}
