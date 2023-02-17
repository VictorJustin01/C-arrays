#include <stdio.h>

int main(){
	int vetor[5],i;
	int maior,menor, pMaior, pMenor;
	
		for(i = 0; i < 5; i++){
			printf("Insira um numero inteiro: ");
				scanf("%d", &vetor[i]);
				maior = vetor[0];
				menor = vetor[0];
				
				if(maior < vetor[i]){
					pMaior = i;
					maior = vetor[i];
					}
				
				if(menor > vetor[i]){
				pMenor = i;
				menor = vetor[i];
			}
		}
		
		printf("posicao maior: %d\n", pMaior );
		printf("posicao menor: %d", pMenor);
}
