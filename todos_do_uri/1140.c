#include <stdio.h>
#include <ctype.h>

int ehTautogramaPonteiros (char str[]) {
  char aux1 = tolower(*str);
  char aux2 = toupper(*str);

  for (str++; *str; str++) {
    if (*(str - 1) == ' ') {
      if (!(*str == aux1 || *str == aux2)) {
        return 0;
      }
    }
  }
  return 1;
}

int ehTautogramaIndex(char str[]) {
  int i;
  char aux1 = tolower(str[0]);
  char aux2 = toupper(str[0]);
  for (i = 0; str[i]; i++) {
    if (str[i] == ' ') {
      if (!(str[i + 1] == aux1 || str[i + 1] == aux2)) {
        return 0;
      }
    }
  }
  return 1;
}

int main () {
  char str[1001];
  scanf("%[^\n]%*c",str);

  while (str[0] != '*') {
    if (ehTautogramaPonteiros(str)) {
      printf("Y\n");
    }else {
      printf("N\n");
    }
    scanf("%[^\n]%*c",str);
  }
  return 0;
}