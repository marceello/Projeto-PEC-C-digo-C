#include <stdio.h>

int main() {
    // Definindo um vetor para armazenar 20 valores inteiros
    float valores[20];

    // Loop for para inserir valores no vetor
    for (int i = 0; i < 20; ++i)
        {
            printf("Digite o valor: ", i + 1);
            scanf("%d", &valores[i]);
        }
    for (int i = 0; i < 20; ++i) {
        printf("%f ", valores[i]);
    }

    return 0;
}
