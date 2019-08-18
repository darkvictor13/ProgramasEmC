int lenght (char str[]) {
  int i;
  for (i = 0; str[i]; i++)
  ;return i;
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

void transforma_em_maiusculo (char destino[]) {
  int i;
  for (i = 0; destino[i]; i++) {
    if (eh_minusculo(destino[i])) {
      destino[i] += ('A'-'a');
    }
  }
}
