int lenght (char str[]) {
  int i;
  for (i = 0; str[i]; i++)
    ;
  return i;
}

int lenght_v_sem_ser_indexada (char *s) {
  char *p;
  for (p = s; *p; p++)
    ;
  return p-s;
}

void preenche_string (int tam, char ch, char dest[]) {
  for (int i = 0; i < tam; i++) {
    dest[i] = ch;
  }
  dest[tam] = 0;
}

void inverte_string (char destino[],char origem[],int tamanho) {
  int i,j;
  for (i = 0,j = tamanho - 1; j >= 0; i++,j--) {
    destino[i] = origem[j];
  }
  destino[i] = '\0';
}

void gera_string (char dest[],char ch,int num) {
  int i,j = 0,aux;
  for (i = 0; i < num; i++) {
    for (aux = 0; aux <= i; aux++,j++) {
      dest [j] = ch;
    }
    dest[j] = ' ';
    j++;
  }
  dest[j] = '\0';
}

void um_pra_frente (char origem[],char destino[]) {
  int tamanho = lenght (origem),i,j;

  destino[0] = origem[tamanho-1];//origem[tamanho] == '\0'

  for (i = 0,j = 1; j < tamanho; i++,j++) {
    destino[j] = origem[i];
  }
  destino[j] = '\0';
}

void um_pra_frentev2(char origem[],char destino[]) {
  int i;
  for (i = 0; origem[i]; i++) {
    destino[i+1] = origem[i];
  }
  destino[0] = origem[i-1];//o i sai do for na casa do \0
  destino[i] = '\0';
}

void um_pra_tras (char *destino,char *origem) {
  char *aux = destino;
  destino++;
  for (; *origem; destino++,origem++) {
    *destino = *origem;
  }
  *aux = *(origem-1);
  *(destino-1) = *origem;
}

void copystr (char destino[],char origem[]) {
  for (int i = 0; destino[i] = origem[i]; i++)
  ;
}

void copystr_sem_index (char *destino,char *origem) {
  for (; *destino = *origem; destino++,origem++) {
    ;
  }
}

char * copystr_voltando_o_local (char *destino,char *origem) {
  char *p = destino;
  for (; *destino = *origem; destino++,origem++) {
    ;
  }
  return p;
}

char * copystr_o_mais_eficiente (char *destino,char *origem) {
  char *p = destino;
  while (*destino++ == *origem++)
    ;
  return p;
  }

int acha_o_indice_desse_char (char string[],char x) {
  int i;
  for (i = 0; string[i]; i++) {
    if (string[i] == x) {
      return i;
    }
  }return -1;
}

int eh_vogal (char x) {
  if (acha_o_indice_desse_char ("aeiouAEIOU",x) != -1) {
    return 1;
  }
  return 0;
}

int eh_numero (char x) {
  if (x >= '1' && x <= '9') {
    return 1;
  }
  return 0;
}

int eh_minusculo (char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return 1;
  }
  return 0;
}

int eh_maiusculo (char ch) {
  if (ch >= 'A' && ch <= 'Z') {
    return 1;
  }
  return 0;
}

void transforma_um_char_em_maiusculo (char *c) {
  if (eh_minusculo(*c)) {
    *c += ('A'-'a');
  }
}

void transforma_um_char_em_minusculo (char *c) {
  if (eh_maiusculo(*c)) {
    *c += ('a'-'A');
  }
}

int eh_letra (char x) {
  if (x >= 'A' && x <= 'z') {
    return 1;
  }
  return 0;
}

int eh_especial (char x) {
  if ((x > 32 && x < 48) || (x < 57 && x < 65)) {
    return 1;
  }
  return 0;
}

int eh_especial_conta_espaco (char x) {
  if ((x >= 32 && x < 48) || (x < 57 && x < 65)) {
    return 1;
  }
  return 0;
}

int conta_letra (char string[]) {
  int i,contador = 0;
  for (i = 0; string[i]; i++) {
    if (eh_letra(string[i])) {
      contador++;
    }
  }return contador;
}

int conta_maiuscula (char string[]) {
  int i,contador = 0;
  for (i = 0; string[i]; i++) {
    if (eh_maiusculo(string[i])) {
      contador++;
    }
  }return contador;
}

int conta_vogal (char string[]) {
  int i,vogais = 0;
  for (i = 0; string[i]; i++) {
    if (eh_vogal (string[i])) {
      vogais++;
    }
  }return vogais;
}

int conta_minusculo (char string[]) {
  int i,contador = 0;
  for (i = 0; string[i]; i++) {
    if (eh_minusculo(string[i])) {
      contador++;
    }
  }return contador;
}

int conta_numero (char string[]) {
  int i,contador = 0;
  for (i = 0; string[i]; i++) {
    if (eh_numero(string[i])) {
      contador++;
    }
  }return contador;
}

int conta_esse_char_especifico (char *str,char x) {
  int count = 0;
  for (; *str; str++) {
    if (*str == x) {
      count++;
    }
  }
  return count;
}

int strings_sao_iguais (char sa[],char sb[]) {
  int i;
  for (i = 0; sa[i]; i++) {
    if (sa[i] != sb[i]) {
      return 0;
    }
  }
  return sa[i] == sb[i];
}

void transforma_em_maiusculo_toda_a_string (char destino[]) {
  int i;
  for (i = 0; destino[i]; i++) {
    if (eh_minusculo(destino[i])) {
      destino[i] += ('A'-'a');
    }
  }
}

void conta_todas_as_letras (char destino[],int v[],int t) {
  int i,aux;
  for (i = 0; destino[i]; i++) {
    aux = (destino[i] - 'A');
    v[aux]++;
  }
}

char * concatena_string (char *destino,char *origem) {
  copystr_o_mais_eficiente ((destino+lenght_v_sem_ser_indexada(destino)),origem);
  return destino;
}

int conta_varios_char (char *parametro,char *str) {
  int count = 0;char *aux = parametro;
  for (; *str; str++) {
    for (parametro = aux; *parametro; parametro++) {
      if (*str == *parametro) {
        count++;
        break;
      }
    }
  }
  return count;
}
