#include <stdio.h>
#define N 6
int main(){
	// declaração de variaveis
	int i;
	int vetor[N];
	
	// leitura de dados com loop for
		for(i = 0; i < N; i++){
			printf("Insria o elemento %d: \n", i + 1);
				scanf("%d", &vetor[i]);
		}
		for (i = 5; i >= 0; i--){
			printf("vetor[%d] = %d\n", i, vetor[i]);
		}
	return 0;
}
