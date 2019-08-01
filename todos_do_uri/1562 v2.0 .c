#include <stdio.h>

void limpa_vet (int v[],int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    v[i] = 0;
  }
}

void desejo_dos_alunos (int v[],int casos) {
  int i,n;
  for (i = 0; i < casos; i++) {
    scanf("%d", &n);
    v[i] = n;
  }
}

void checa_se_ja_foi_escolhido_como_dupla(int desejo[], int duplas[], int tam, int dupla){
  int i;
	for(i = 0; i < tam; i++){
		if(desejo[i] == dupla){
			if(desejo[i] == duplas[i]){
				duplas[tam] = i+1;
				return;
			}
		}
	}
}

int checa_se_a_dupla_ainda_nao_foi_escolhida(int vet[], int dupla){
	int i = dupla, x = 0;
	if(vet[i-1] > 0){
		x = 1;
	}
	return x;
}

void checa_alguem_que_ainda_nao_foi_escolhido(int desejo[], int duplas[], int tam, int inicio, int dupla){
  int i;
	for(i = inicio + 1; i < tam; i++){
		if(desejo[i] == dupla){
			duplas[inicio] = i+1;
		}
	}
}

void preenche_vetor_duplas(int desejo[], int duplas[], int tam){
	int i, aux;
	for(i = 0; i < tam; i++){
		aux = checa_se_a_dupla_ainda_nao_foi_escolhida(duplas, desejo[i]);
		if(aux == 0){
			duplas[i] = desejo[i];
		}
		checa_se_ja_foi_escolhido_como_dupla(desejo, duplas, i, i+1);
	}
	for(i = 0; i < tam; i++){
		if(duplas[i] == 0){
			checa_alguem_que_ainda_nao_foi_escolhido(desejo, duplas, tam, i, i+1);
		}
	}
}

void printa_vetor (int v[],int count) {
  int i;
  for (i = 0; i < count; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main () {
  int desejo_aluninhu[10001],duplas[10001],num_alunos,i;
  limpa_vet (duplas,10001);
  while (1) {//while (!= feof)
    limpa_vet (duplas,10001);
    limpa_vet (desejo_aluninhu,10001);
    scanf("%d", &num_alunos);
    desejo_dos_alunos (desejo_aluninhu,num_alunos);
    if (num_alunos % 2 != 0) {
      printf("IMPOSSIBLE\n");
    }
    preenche_vetor_duplas (desejo_aluninhu,duplas,num_alunos);
    for(i = 0; i < num_alunos; i++){
  		if(duplas[i] == 0 || duplas[i] == i+1){
  			printf("IMPOSSIBLE\n");
  		}
  	}
  printa_vetor(duplas, num_alunos);
 }
  return 0;
}
