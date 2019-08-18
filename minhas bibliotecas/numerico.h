void vira_positivo (int *n) {
  if (*n < 0) {
    *n = (*n) * (-1);
  }
}

void troca (int *a,int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
