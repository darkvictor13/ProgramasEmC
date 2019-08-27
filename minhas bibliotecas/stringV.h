int lenght (char str[]) {
  int i;
  for (i = 0; str[i]; i++)
  ;return i;
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

void copystr (char destino[],char origem[]) {
  for (int i = 0; destino[i] = origem[i]; i++)
  ;
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

void transforma_em_maiusculo_toda_a_string (char destino[]) {
  int i;
  for (i = 0; destino[i]; i++) {
    if (eh_minusculo(destino[i])) {
      destino[i] += ('A'-'a');
    }
  }
}
