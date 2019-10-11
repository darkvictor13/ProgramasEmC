#include <stdio.h>

#define maxc 100

void preenche_matriz (int m[][maxc],int *nl,int *nc) {
  int i,j;

  scanf ("%d %d",nl,nc);

  for (i = 0; i < *nl; i++) {
    for (j = 0; j < *nc; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}

/*int vet_eh_nulo (int v[],int t) {
  int *p = (v+t);

  for (;v < p; v++) {
    if (*v) {
      return 0;
    }
  }
  return 1;
}*/

int contaL (int m[][maxc],int l,int c,int x) 
{
  int i,j,count;

  for (i = count = 0; i < l; i++)
  {
    for (j = 0; j < c; j++)
    {
      if (m[i][j] != x)
      {
        break;
      }
    }
    count += (j == c);
  }
  return count;
}

int contaC (int m[][maxc],int l,int c,int x) 
{
  int i,j,count;

  for (j = count = 0; j < l; j++)
  {
    for (i = 0; i < l && m[i][j] == x; i++)
    {
      ;
    }
    count += (i == c);
  }
  return count;
}

int conta (int m[][maxc],int nl,int nc,int *lx,int *cx,int x) 
{
  *lx = contaL (m,nl,nc,x);
  *cx = contaC (m,nl,nc,x);
} 

int main () {
  int m[maxc][maxc],nl = 1,nc = 1,lx,cx;

  while (nl > 0 && nc > 0) {
    preenche_matriz (m,&nl,&nc);
    conta (m,nl,nc,&lx,&cx,0);
    printf ("num de linhas igual a [0] = %d\nnum de colunas igual a [0] = %d\n",lx,cx);
  }
  return 0;
}