#include <stdio.h>
#include <string.h>

int main () {
  int qnt_str,tam_str;
  char str[22];

  for (scanf("%d",&qnt_str); qnt_str > 0; qnt_str--) {
    scanf("%s",str);
    tam_str = strlen(str);

    if (tam_str == 3) {
      if (str[0] == 'U' && str[1] == 'R') {
        printf("URI");
      }else if (str[0] == 'O' && str[1] == 'B') {
        printf("OBI");
      }else {
        printf("%s",str);
      }
    }else {
      printf("%s",str);
    }
    if (qnt_str > 1) {
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}