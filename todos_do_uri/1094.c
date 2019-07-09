#include <stdio.h>

void coelhos (int * soma,int num) {
  *soma += num;
}

void ratos (int * soma,int num) {
  *soma += num;
}

void sapos (int * soma,int num) {
  *soma += num;
}

void deixar_bonitinho_o_num_de_loop (int * n) {
  scanf("%d", n);
}

void em_percentual (int total,int r,int s,int c) {
  printf("Percentual de coelhos: %.2f %\n",(c/(float)total) * 100) ;
  printf("Percentual de ratos: %.2f %\n",(r/(float)total) * 100);
  printf("Percentual de sapos: %.2f %\n",(s/(float)total) * 100);
}

int main () {
  char x;int soma_sapos = 0,soma_coelhos = 0,soma_ratos = 0,i,aux,tot_cobaias =0;
  deixar_bonitinho_o_num_de_loop (&i);
  for (; i > 0; i--) {
    scanf("%d %c",&aux,&x);
    if (x == 'R') {
      ratos (&soma_ratos,aux);
    }
    if (x == 'C') {
      coelhos (&soma_coelhos,aux);
    }
    if (x == 'S') {
      sapos (&soma_sapos,aux);
    }
    tot_cobaias += aux;
  }
  printf("Total: %d cobaias\nTotal de coelhos: %d\n",tot_cobaias,soma_coelhos);
  printf("Total de ratos: %d\nTotal de sapos: %d\n",soma_ratos,soma_sapos);
  em_percentual (tot_cobaias,soma_ratos,soma_sapos,soma_coelhos);
  return 0;
}
