#include <stdio.h>

int main(){
	int vet[10],i;
	
	for(i = 0; i < 10; i++){
		printf("Insira um valor: ");
			scanf("%d", &vet[i]);
	}
	for(i = 0; i < 10; i++){
		if(vet[i] % 2 == 0)
		printf("vetor de indice %d e valor %d eh par\n", i, vet[i]);
		else
		printf("vetor de indice %d e valor %d eh impar\n", i, vet[i]);
	}
}
