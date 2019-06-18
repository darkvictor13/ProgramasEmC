#include <stdio.h>

int eh_maiusculo (char ch) {
  if (ch >= 'A' && ch <= 'Z') {
    return 1;
  }else{
    return 0;
  }
}

int eh_minusculo (char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return 1;
  }else{
    return 0;
  }
}

int eh_digito (char ch) {
  if (ch >= '0' && ch <= '9') {
    return 1;
  }else{
    return 0;
  }
}

int main () {
  char ch;
  int X = 0,x = 0,dig = 0;
  scanf("%c",&ch);
  while (ch != '.') {
    if (eh_maiusculo(ch)) {
      X++;
    }
    if (eh_minusculo (ch)) {
      x++;
    }
    if (eh_digito (ch)) {
      dig++;
    }
  }
  printf("%d maiusculas\n%d minusculo\n%d digito", X,x,dig);
  return 0;
}
