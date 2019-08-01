#include <stdio.h>

void printa_vetor(int vet[], int tam){
	for(int i = 0; i < tam; i++){
		printf("[%d]", vet[i]);
	}
	printf("\n");
}

void checa_se_ja_foi_escolhido_como_dupla(int desejo[], int duplas[], int tam, int dupla){
	for(int i = 0; i < tam; i++){
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
	for(int i = inicio + 1; i < tam; i++){
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


int main(){
	int desejo[10000], duplas[10000], n, i;
	for(i = 0; i < 10000; i++){
		duplas[i] = 0;
	}
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &desejo[i]);
		if(n % 2 == 1){
			printf("IMPOSSIBLE\n");
			return 0;
		}
	}
	preenche_vetor_duplas(desejo, duplas, n);
	for(i = 0; i < n; i++){
		if(duplas[i] == 0 || duplas[i] == i+1){
			printf("IMPOSSIBLE\n");
			return 0;
		}
	}
	printa_vetor(duplas, n);
	printa_vetor(desejo, n);
	return 0;
}
