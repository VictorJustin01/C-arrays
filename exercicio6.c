#include <stdio.h>

#define N 10

int main() {
  int vetor[N];
  int i;
  int maior, menor;

  // Leitura dos elementos do vetor
  printf("Informe %d elementos: \n", N);
  for (i = 0; i < N; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  // Inicialização dos valores de maior e menor
  maior = vetor[0];
  menor = vetor[0];

  // Encontrando o maior e menor elemento
  for (i = 1; i < N; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  // Impressão dos resultados
  printf("Maior elemento: %d\n", maior);
  printf("Menor elemento: %d\n", menor);

  return 0;
}

