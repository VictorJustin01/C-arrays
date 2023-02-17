#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], resultante[20];
    int i;

    printf("Digite os valores do primeiro vetor: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os valores do segundo vetor: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            resultante[i] = vetor1[i];
        } else {
            resultante[i] = vetor2[i];
        }
    }

    printf("Vetor resultante: \n");
    for (i = 0; i < 20; i++) {
        printf("%d ", resultante[i]);
    }
    printf("\n");

    return 0;
}

