#include <stdio.h>

void inicializacao () {
  printf("OLA USUARIO FINAL DESTE PROGRAMA !!!!\n\n");
  printf("Se vc inicializou esse programa provavelmente e uma pessoa muito importante!\n\n");
  printf("Esse codigo e altamente secreto se deseja ler as informacoes nele contido\n\n");
  printf("Faca isso por sua conta em risco. Se realmente deseja ler digite 1,e 0 encerra\n\n");
}

int inicia_ou_nao () {
  char x = '3';

  while (x != '0' || x != '1') {
    printf("Sua resposta -> ");
    scanf("%s", &x);
    printf("\n");
    if (x == '0') {
      printf("nossa vc realmente nao quer ler o conteudo que triste\n");
      return 0;
    }if (x == '1') {
      return 1;
    }
    printf("Opa galera parece que esse usuario nao sabe ler os comandos, tenta denovo ae\n");
  }
}

void meio_do_programa () {
  printf("Parece que vc realmente quer saber o que tem armazenado nesse programa heim\n\n");
  printf("Mas antes de te dar os dados indique a primeira letra do seu nome\n\n");
  printf("Primeira letra do seu nome -> ");
}

void letra_nome1 (char *c) {
  scanf("%s", c);
  printf("\n");
  printf("Entao seu nome comeca com a letra %c ????\n\n", *c);
}

void confirma_inicial (int *i) {
  printf("confirme se esta correto, da mesma maneira. (1 confirma)\n");
  scanf("%d", i);
  if (*i == 1) {
    printf("Otimo agora que sei o seu nome esta pronto(a) para receber a informacao\n\n");
  }
  else {
    printf("VOCE MENTIU PARA MIM, ESTOU MUITO TRISTE\n");
    printf("pois a informacao estava certa e voce disse que estava errada ;-;\n");
    printf("vou encerrar o programa de tao triste que estou\n");
  }
}

void informacao () {
  printf("A informacao e a seguinte : \n\n");
  printf("Dia 20 de agosto aqui em casa tem festa pessoal\n");
  printf("Contamos com sua presenca as 20hs\n\n");
}

void result_programa (char x) {
  int i;
  printf("agora me diga o que achou do programa\nSe gostou digite 1\n\n");
  printf("opiniao -> ");
  scanf("%d", &i);
  printf("\n");
  if (i == 1) {
    printf("Yaaaaaaay que bom que gostou %c !!! :) \n", x);
  }else {
    printf("tentei fazer meu melhor ;-;\n");
  }
}

int main () {
  char inicial_nome;
  int confirmacao1;
  inicializacao ();
  if (inicia_ou_nao () == 0) {
    return 0;
  }
  meio_do_programa ();
  letra_nome1 (&inicial_nome);
  confirma_inicial (&confirmacao1);
  if (confirmacao1 != 1) {
    return 0;
  }
  informacao ();
  result_programa (inicial_nome);
  return 0;
}
