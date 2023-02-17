#include <stdio.h>
#include <math.h>

int main(){
	int i, j ;
	float num[10], quadradoNum[10];
	
	for(i = 0; i < 10; i++){
		printf("Insira um numero real: ");
			scanf("%f", &num[i]);
	}
	
		for (j = 0; j < 10; j++){
			for(i = j; i <=j; i++){
				quadradoNum[j] = pow(num[i], 2);
			}
		}
			for(i = 0; i < 10; i++)
			printf("%2.lf\n", num[i]);
		for(j = 0; j < 10; j++)
		printf("\n%2.lf\n", quadradoNum[j]);
}
