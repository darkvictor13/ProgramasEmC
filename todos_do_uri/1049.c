#include <stdio.h>
#include <string.h>

void achaResposta (char dest[],char s1[],char s2[],char s3[]) {
  if (!strcmp(s1,"vertebrado")) {
    if (!strcmp(s2,"ave")) {
      if (!strcmp(s3,"carnivoro")) {
        strcpy(dest,"aguia");
      }else {
        strcpy(dest,"pomba");
      }
    }else {
      if (!strcmp(s3,"onivoro")) {
        strcpy(dest,"homem");
      }else {
        strcpy(dest,"vaca");
      }
    }
  }else {
    if (!strcmp(s2,"inseto")) {
      if (!strcmp(s3,"hematofago")) {
        strcpy(dest,"pulga");
      }else {
        strcpy(dest,"lagarta");
      }
    }else {
      if (!strcmp(s3,"hematofago")) {
        strcpy(dest,"sanguessuga");
      }else {
        strcpy(dest,"minhoca");
      }
    }
  }
}

int main () {
  char str1[13];
  char str2[9];
  char str3[15];
  char str_resposta[15];

  scanf("%[^\n]%*c",str1);
  scanf("%[^\n]%*c",str2);
  scanf("%[^\n]",str3);

  achaResposta(str_resposta,str1,str2,str3);
  printf("%s\n",str_resposta);

  return 0;
}
