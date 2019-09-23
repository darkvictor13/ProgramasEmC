void vira_positivo (int *n) {
  if (*n < 0) {
    *n = (*n) * (-1);
  }
}

int num_eh_primo (int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int soma_dos_dig (int n) {
//logica pegar cada termo de um num matando o num:
//guarde o resto dele com 10 dps divida o num por 10
  int aux = 0;
  while (n > 0) {
    aux += n % 10;
    n /= 10;
  }
  return aux;
}

int soma_eh_par (int n) {
  int aux = soma_dos_dig (n);
  if (aux % 2 == 0) {
    return 1;
  }
  return 0;
}

int eh_par (int n) {
  return !(n%2);
}

void troca (int *a,int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
