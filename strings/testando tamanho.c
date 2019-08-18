#include "bibliotecas.h"

int main () {
  //char string[] = {"1234567890"};
  char string1[20],string2[20];
  int tamanho,vogais,letra,maiuscula,minuscula,numero;
  gets (string1);
  //scanf("%s", string);
  tamanho = lenght (string1);
  copystr (string2,string1);
  printf("tamanho = %d\n", tamanho);
  printf("String original : ");
  puts (string1);
  printf("String copia : ");
  puts (string2);
  vogais = conta_vogal (string2);
  printf("num de vogais = %d\n", vogais);
  letra = conta_letra (string2);
  printf("num de letras = %d\n", letra);
  maiuscula = conta_maiuscula (string2);
  printf("num de maiusculas = %d\n", maiuscula);
  minuscula = conta_minusculo (string2);
  printf("num de minusculas = %d\n", minuscula);
  numero = conta_numero (string2);
  printf("num de numeros = %d\n", numero);
  return 0;
}
