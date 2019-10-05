#define path "//home/victor_almeida/Desktop/ProgramasEmC-todos_meus_programas/minhas bibliotecas/bibliotecas.h"

#include path

int conta_linhas_nulas (int m[][100],int nl,int nc) {
  int i,linhas;

  for (i = linhas = 0; i < nl; i++)
  {
    if (vet_eh_nulo (m[i],nc)) {
      linhas++;
    } 
  }
  return linhas;
} 

int main () {
  int m[100][100],nl = 1,nc = 1,lnula;

  while (nl > 0 && nc > 0)
  {
    preenche_matriz (m,&nl,&nc);
    lnula = conta_linhas_nulas (m,nl,nc);
    printf ("linhas nulas = %d",lnula);
  }
  
  return 1;
}