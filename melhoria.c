#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Definição de todas as variáveis iniciais

    int n = 20;                                                                          // o tamanho será de 20 números inteiros
    float v1[n];                                                                         // o vetor aceitará números com até 4 casas decimais

    float m;                                                                             //média
    float v;                                                                             //variância
    float dp;                                                                            //desvio padrão

    float soma1, soma2;                                                                // somatórias da média e da variância respectivamente
    float somatorias = 0.0;
    somatorias = soma1 = soma2;


    // Entrada de dados

    printf("Bem vindo, caro usuario! Antes de calcularmos, escolha os %d numeros\n", n);
    printf("\n");

    for (int i = 0; i < n; i++)                                                          // loop próprio para os comandos do número onde o usuário colocará os dados
        {
            printf("Numero %d:", i + 1);
            scanf("%f", &v1[i]);
        }

    printf("\n");

   // Cálculo da média


    for (int i = 0; i < n; i++)
        {
            soma1 += v1[i];
        }
         m = soma1/ n;                                                                 //necessário estar fora para ter o resultado final da somatória


    // Cálculo da variância
    for (int i = 0; i < n; i++)
        {
            soma2 += pow(v1[i] - m, 2);                                        //elevação ao quadrado da diferença entre os valores individuais e a média
        }
        v = soma2 / n;

    // Cálculo do desvio padrão

    dp = sqrt(v);                                                                       //função própria para raiz quadrada

    // Exibição dos resultados

    printf("\nMedia: %.2f\n", m);

    printf("Desvio Padrao: %.2f\n", dp);

    printf("Variancia: %.2f\n", v);

    printf("\nFim\n");

    return 0;
}
