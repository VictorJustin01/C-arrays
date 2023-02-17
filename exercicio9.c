#include <stdio.h>
#define N 6

int main(){
	// declaração de variaveis
	int vetor[N];
	int i = 0;
	
	//leitura de dados
	
	printf("Insira %d numeros\n", N);
	
		while(i < N){
			printf("Insira um numero: ");
				scanf("%d", &vetor[i]);
				
				if(vetor[i] % 2 == 0)
				i++;
				
				else{
					printf("Apenas numeros pares \n");
					printf("Insira um numero: ");
				scanf("%d", &vetor[i]);
				}
				
		}
		for(i = N-1; i >= 0; i--){
			printf("vetor[%d] de valor %d\n", i, vetor[i]);
		}
		
	return 0;
}
