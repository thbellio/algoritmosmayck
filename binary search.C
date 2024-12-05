#include <stdio.h>

// Função para implementar o algoritmo Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Verifica se o elemento alvo está no meio
        if (arr[mid] == target)
            return mid;

        // Se o elemento alvo é maior, ignora a metade esquerda
        if (arr[mid] < target)
            left = mid + 1;

        // Se o elemento alvo é menor, ignora a metade direita
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Lista ordenada
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Elemento encontrado no índice: %d\n", result);
    else
        printf("Elemento não encontrado.\n");

    return 0;
}
