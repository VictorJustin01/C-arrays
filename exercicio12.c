#include <stdio.h>
#define N 5

int main(){
	int vetor[N];
	int maior, menor, soma = 0, i;
	float media;
	
			printf("Insira %d numeros\n", N);
			
				for(i = 0; i < N; i++){
					printf("Insira o %d numero: ", i + 1 );
						scanf("%d", &vetor[i]);
						
						soma += vetor[i];
						maior = vetor[0];
						menor = vetor[0];
						
						if(vetor[i] > maior)
						maior = vetor[i];
						if(vetor[i] < menor)
						menor = vetor[i]; 
				}
				
				for(i = 0; i < N; i++){
					printf("vetor[%d] de valor %d\n",i, vetor[i]);
				}
				media = soma/N;
				printf("\nMaior valor: %d\n", maior);
				printf("Menor valor: %d\n", menor);
				printf("Media: %2.f", media);
	return 0;
}
