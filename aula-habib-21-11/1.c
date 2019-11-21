#include <stdio.h>

int copiaArquivo (char fn_org[],char fn_dest[]) {
  FILE *arq_origem, *arq_dest;
  char buffer[1000];
  int lidos;

  if ((arq_origem = fopen(fn_org,"rb")) == NULL) {
    printf("nao consegui abrir o arquivo\n");
    return 1;
  }

  if ((arq_dest = fopen(fn_dest,"wb")) == NULL) {
    fclose(arq_origem);
    return 2;
  }

  while (lidos = fread(buffer,1,1000,arq_origem)) {
    fwrite(buffer,1,lidos,arq_dest);
  }
  fclose(arq_origem);
  fclose(arq_dest);
  return 0;
}


int main (int argc, char *argv[]) {

  if (argc == 3) {
    if (copiaArquivo(argv[1],argv[2])) {
      printf("Erro!\n");
    }
  }else {
    printf("Erro ao copiar arquivo por favor entre com Fna Fnb\n");
  }

}