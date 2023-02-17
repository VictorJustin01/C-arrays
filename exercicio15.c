#include <stdio.h>

int main() {
    int tamanho_vetor = 20;
    int vetor_original[tamanho_vetor];
    int vetor_sem_repeticao[tamanho_vetor];
    int tamanho_vetor_sem_repeticao = 0;
    int i,j;

    // Leitura dos valores do vetor
    for ( i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%d", &vetor_original[i]);
    }

    // Adição dos elementos não repetidos no novo vetor
    for ( i = 0; i < tamanho_vetor; i++) {
        int valor_atual = vetor_original[i];
        int encontrado = 0;
        for ( j = 0; j < tamanho_vetor_sem_repeticao; j++) {
            if (valor_atual == vetor_sem_repeticao[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            vetor_sem_repeticao[tamanho_vetor_sem_repeticao] = valor_atual;
            tamanho_vetor_sem_repeticao++;
        }
    }

    // Impressão do novo vetor
    printf("\nVetor sem repeticao: ");
    for ( i = 0; i < tamanho_vetor_sem_repeticao; i++) {
        printf("%d ", vetor_sem_repeticao[i]);
    }

    return 0;
}

