#include <stdio.h>
#define N 10

int main(){
	
	float vetor[N];
	int quantNumNegativo;
	float somaNumPositivo = 0;
	int i;
	
			printf("Insira %d numeros\n", N);
		for(i = 0; i < N; i++){
			printf("Insira o %d numero: ", i + 1);
				scanf("%f", &vetor[i]);
				
				if(vetor[i] >= 0 )
				somaNumPositivo += vetor[i];	
				
				if(vetor[i] < 0)
				quantNumNegativo++;	
				
		}
		printf("\nquantidade de numeros negativos: %d\n", quantNumNegativo);
		printf("soma dos numeros positivos: %2.f", somaNumPositivo);
		
}
