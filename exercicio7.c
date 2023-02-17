#include <stdio.h>
#define N 10
int main(){
	
	//Definindo variaveis
	int i = 0;
	int maior, posicao;
	int vetor[N];
	

	// leitura dos elementos do vetor
	printf("Insira %d elementos\n", N);
		for(i = 0; i < N; i++){
			printf("Insira o elemento %d: ", i + 1);
				scanf("%i", &vetor[i]);

}
	
		// Condicional de valor e posição
		maior = vetor[0];
	   posicao = 0;
	
			for(i = 0; i < N; i++){
			
			if(maior < vetor[i]){
				maior = vetor[i];
				posicao = i;
			}
		
	}
			for(i = 0; i < N; i++){
				printf("vetor [%d] = %d\n", i, vetor[i]);
			}
			
			printf("O maior valor eh %d\n", maior);
			printf("A posicao do maior elemento eh %d", posicao) ;
	return 0;
}
