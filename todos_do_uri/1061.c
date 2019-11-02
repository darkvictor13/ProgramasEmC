#include <stdio.h>

void leitura_data (int *d,int *h,int *m,int *s) {
  scanf("Dia %d", d);
  scanf("%d : %d : %d%*c",h,m,s);
}

void resul(int d1,int d2,int h1,int h2,int m1,int m2,int s1,int s2,int *r_dia,int *r_hora,int *r_min,int *r_seg) {
  *r_dia = d2 - d1;
  *r_hora = h2 - h1;
  *r_min = m2 - m1;
  *r_seg = s2 - s1;

  if (*r_seg < 0) {
    *r_seg += 60;
    *r_min -= 1;
  }
  if (*r_min < 0) {
    *r_min += 60;
    *r_hora -= 1;
  } 
  if (*r_hora < 0) {
    *r_hora += 24;
    *r_dia -= 1;
  }
}

int main () {
  int d1,d2,h1,h2,m1,m2,s1,s2;
  int d_final,h_final,m_final,s_final;
  leitura_data (&d1,&h1,&m1,&s1);
  leitura_data (&d2,&h2,&m2,&s2);
  resul (d1,d2,h1,h2,m1,m2,s1,s2,&d_final,&h_final,&m_final,&s_final);
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d_final,h_final,m_final,s_final);
  return 0;
}
