#include <stdio.h>
#define N 15

int main(){
	float vetor[N];
	int i;
	float soma = 0;
	
		for(i = 0; i < N; i++){
			printf("Insira a nota do aluno %d :\n", i + 1);
				scanf("%f", &vetor[i]);
				soma += vetor[i];
		}
		
		
		printf("A media geral dos alunos eh %2.f: ", soma/N);
	return 0;
}
