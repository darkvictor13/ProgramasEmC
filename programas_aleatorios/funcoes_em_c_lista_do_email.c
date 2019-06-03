#include <stdio.h>
#include <math.h>
int total_seg (int h, int min, int seg) {//entrada de dados por meio de parametros n usa scanf.
  int hora_em_seg,min_em_seg;//variaveis locais(so servem para essa funcao)
  hora_em_seg = h*3600;//contem as horas convertidas em segundos
  min_em_seg = min*60;//contem os minutos convertidas em segundos
  return (hora_em_seg+min_em_seg+seg);//n usa printf  saida de dados por meio do return
}
int total_de_horas (int segundos_acumulados){
return (segundos_acumulados/3600);
}
  int total_minutos (int segundos_acumulados){
    return ((segundos_acumulados%3600)/60);
  }
  int total_segundos (int segundos_acumulados){
    return ((segundos_acumulados%3600)%60);
  }
  double fatorial_resultado (int x){
    return ((sqrt(2*M_PI*x))*(pow(x/exp(1),x)));
  }


 int main () {
 int horas, minutos, segundos, segundos_acumulados, numero_pra_virar_fatorial;
   printf("Entre com uma hora do dia\n");
   scanf ("%d %d %d",&horas,&minutos,&segundos);
   printf("Segundos acumulados = %d\n",total_seg(horas, minutos, segundos));
   printf("Entre com os segundos decorridos\n");
   scanf("%d",&segundos_acumulados);
   printf("Equivale a %02d:02%d:%02d\n",total_de_horas (segundos_acumulados),
                                  total_minutos (segundos_acumulados),
                                  total_segundos (segundos_acumulados));
  /* esses totais de horas, minutos e segundos estao em 1 mesma linha */
  printf("Entre com um número:\n");
  scanf ("%d",&numero_pra_virar_fatorial);
  printf("O fatorial aproximado de %d eh = %lf\n", numero_pra_virar_fatorial ,fatorial_resultado (numero_pra_virar_fatorial));
  return 0;

 }
