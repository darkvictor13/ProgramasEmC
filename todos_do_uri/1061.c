#include <stdio.h>

void leitura_data (int *d,int *h,int *m,int *s) {
  int aux_d,aux_h,aux_m,aux_s;
  scanf("Dia %d", &aux_d);
  scanf("%d : %d : %d",&aux_h,&aux_m,&aux_s);
  *d = aux_d;
  *h = aux_h;
  *m = aux_m;
  *s = aux_s;
}

int cal_d (int d1,int d2) {
  return d2 - d1;
}

int calc_h (int h1,int h2) {
  return h2 - h1;
}

int calc_m (int m1,int m2) {
  return m2 - m1;
}

int calc_s (int s1,int s2) {
  return s2 - s1;
}

void resul (int d1,int d2,int h1,int h2,int m1,int m2,int s1,int s2) {
  int r_dia,r_hora,r_min,r_seg;
  r_dia = cal_d (d1,d2);
  r_hora = calc_h (h1,h2);
  r_min = calc_m (m1,m2);
  r_seg = calc_s (s1,s2);
  if (r_seg < 0) {
    r_seg += 60;
    r_min --;
  }else if (r_min < 0) {
    r_min += 60;
    r_hora --;
  } else if (r_hora < 0) {
    r_hora += 12;
    r_dia --;
  }
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",r_dia,r_hora,r_min,r_seg);
}

int main () {
  int d1=0,d2=0,h1=0,h2=0,m1=0,m2=0,s1=0,s2=0;
  leitura_data (&d1,&h1,&m1,&s1);
  leitura_data (&d2,&h2,&m2,&s2);
  resul (d1,d2,h1,h2,m1,m2,s1,s2);
  return 0;
}
