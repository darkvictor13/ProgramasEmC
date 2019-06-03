#include <math.h>
#include <stdio.h>
int main () {
  int i, *p;
  i=20;
  p = &i;
  printf("valor de i\n");
  printf("%d\n",*p); //conteudo de onde o ponteiro aponta
  printf("%d\n",i); // imprime o valor de i
  printf("local de memoria\n");
  printf("%d\n",&i); // local de memoria da variavel p onde o ponteiro aponta
  printf("%d\n",p); //estou imprimindo o conteudo de p
  printf("locais de memoria em hexadecimal especifico\n");
  printf("%p\n",&i);
  printf("%p\n",p);
  printf("locais de memoria em hexadecimal pode ser qualquer numero \n");
  printf("%x\n",&i);
  printf("%x\n",p);
  printf("%locais de memoria em octal\n");
  printf("%o\n",&i);
  printf("%o\n",p);
  return 0;

}
/* ponteiro =  compartilhamento de memoria
   coisas q nao existem
   *p = i
   p = 20  */
