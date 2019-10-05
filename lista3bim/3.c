#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max_tam 100

void MaiuscMinusc (char *dest,char *org) {
  int count;

  for (count = 0; *org; org++,dest++,count++) {
    if (*org == ' ') {
      *dest = ' ';
      dest++;
      org++;
    }

    if (!(count%2)) {
      *dest = toupper (*org);
    }else {
      *dest = tolower (*org);
    }
  }
}

int main () {
  char str_entrada[max_tam],str_resp[max_tam];
  int casos;

  scanf ("%d%*c",&casos);

  while (casos > 0)
  {
    scanf ("%[^\n]%*c",str_entrada);
    MaiuscMinusc (str_resp,str_entrada);
    printf ("%s\n",str_resp);
    casos--;
  }
  return 0;
}