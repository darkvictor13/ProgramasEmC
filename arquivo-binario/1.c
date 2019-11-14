#include <stdio.h>

void backup(char fn_in[],char fn_out[]) {
  char buffer[1000];
  FILE *arch_in,*arch_out;
  
  arch_in = fopen(fn_in,"rb");
  arch_out = fopen(fn_out,"wb");

  while () {

  }
}

int main () {
  backup ("dados.dat","dados.bak");
  return 0;
}