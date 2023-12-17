#include <stdio.h>

int main() {
    float matrix[2][2];
    float inverse[2][2];

    printf("Escreva os valores da Matriz 2x2:\n");

    // Solicita ao usuário para inserir os valores da matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Linha x Coluna [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }
    // Calcula o determinante
    float det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    // Verifica se a matriz é invertível
    if (det == 0) {
        printf("\nA Matriz nao possui inversa.\n");
        return 0;
    }

    // Calcula a matriz adjunta
    inverse[0][0] = matrix[1][1];
    inverse[1][1] = matrix[0][0];
    inverse[0][1] = -matrix[0][1];
    inverse[1][0] = -matrix[1][0];

    // Calcula a matriz inversa multiplicando pela inversa do determinante
    float invDet = 1.0 / det;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            inverse[i][j] *= invDet;
        }
    }

    // Imprime a matriz inversa
    printf("\nMatriz Inversa:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f\t", inverse[i][j]);
        }
        printf("\n");
    }

    return 0;
}
