/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

// Quantidade de produtos que serao organizados
#define TAMANHO 10

// Bubble Sort: compara os precos vizinhos e troca
// quando o preco da esquerda e maior que o da direita.
void bubbleSort(float vetor[], int tamanho) {
    int i, j;
    float temp;
    int trocou;

    for (i = 0; i < tamanho - 1; i++) {
        trocou = 0;

        // Os ultimos elementos ja ficam ordenados
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;

                trocou = 1;
            }
        }

        // Se nao houve troca, o vetor ja esta ordenado
        if (trocou == 0) {
            break;
        }
    }
}

// Particiona o vetor para o Quick Sort.
// Os valores menores ou iguais ao pivo ficam a esquerda.
int particionar(float vetor[], int inicio, int fim) {
    float pivo = vetor[fim];
    float temp;
    int i = inicio - 1;
    int j;

    for (j = inicio; j < fim; j++) {
        if (vetor[j] <= pivo) {
            i++;

            temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }

    // Coloca o pivo na posicao correta
    temp = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temp;

    return i + 1;
}

// Quick Sort: organiza o vetor dividindo-o em partes.
// Depois, ordena cada parte recursivamente.
void quickSort(float vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = particionar(vetor, inicio, fim);

        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

// Exibe os precos dos produtos
void exibirPrecos(float vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("R$ %.2f", vetor[i]);

        if (i < tamanho - 1) {
            printf(" | ");
        }
    }

    printf("\n");
}

int main() {
    // Situacao-problema:
    // organizar os precos de produtos de um supermercado.

    float precosOriginais[TAMANHO] = {
        5.99, 12.50, 3.49, 8.90, 15.00,
        6.75, 2.99, 10.50, 4.25, 7.80
    };

    float precosBubble[TAMANHO];
    float precosQuick[TAMANHO];
    int i;

    // Cria duas copias para usar os mesmos dados
    for (i = 0; i < TAMANHO; i++) {
        precosBubble[i] = precosOriginais[i];
        precosQuick[i] = precosOriginais[i];
    }

    printf("====================================\n");
    printf(" ORGANIZACAO DE PRECOS DO SUPERMERCADO\n");
    printf("====================================\n");

    printf("\nPrecos originais:\n");
    exibirPrecos(precosOriginais, TAMANHO);

    // Ordenacao usando Bubble Sort
    bubbleSort(precosBubble, TAMANHO);

    printf("\nPrecos ordenados com Bubble Sort:\n");
    exibirPrecos(precosBubble, TAMANHO);

    // Ordenacao usando Quick Sort
    quickSort(precosQuick, 0, TAMANHO - 1);

    printf("\nPrecos ordenados com Quick Sort:\n");
    exibirPrecos(precosQuick, TAMANHO);

    printf("\nOrdenacao concluida!\n");

    return 0;
}
