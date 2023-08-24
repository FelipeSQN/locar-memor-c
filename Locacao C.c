#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho, i;
    int *arr;

    // Lê o tamanho do array a ser alocado
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    // Aloca o array usando malloc
    arr = (int*) malloc(tamanho * sizeof(int));

    // Preenche o array com valores aleatórios
    srand(time(NULL));
    for (i = 0; i < tamanho; i++) {
        arr[i] = rand() % 100;
    }

    // Imprime os valores do array
    printf("Valores do array:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Usa realloc para redimensionar o array
    tamanho *= 2;
    arr = (int*) realloc(arr, tamanho * sizeof(int));

    // Preenche o array novamente com novos valores aleatórios
    for (i = tamanho / 2; i < tamanho; i++) {
        arr[i] = rand() % 100;
    }

    // Imprime os valores do array novamente
    printf("Valores do array redimensionado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(arr);

    return 0;
}
