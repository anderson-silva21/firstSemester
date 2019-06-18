/*
4) Escreva uma função que receba como parâmetro duas matrizes, A e B,
e seus tamanhos. A função deve retornar o ponteiro para uma matriz C,
em que C é o produto da multiplicação da matriz A pela matriz B. Se a
multiplicação das matrizes não for possível, retorne um ponteiro nulo.
 */


#include <stdio.h>
#include <stdlib.h>

int **matriz(int linha1, int coluna1, int **K, int linha2, int coluna2, int **L) {

    int **C = NULL;
    if (coluna1 == linha2) {
        C = (int **) malloc(linha1 * sizeof (int*));
        for (int i = 0; i < linha1; i++) {
            C[i] = (int *) malloc(coluna2 * sizeof (int));
        }
        for (int q = 0; q < linha1; q++) {
            for (int w = 0; w < coluna2; w++) {
                C[q][w] = 0;
                for (int e = 0; e < linha2; e++) {
                    C[q][w] = C[q][w] + K[q][e] * L[e][w];
                }
            }
        }
        return C;

    } else {
        return NULL;
    }
}

int main() {
    int **K = NULL;
    int **L = NULL;

    int a = 0, b = 0, c = 0, d = 0;
   
 printf("Insira o tamanho da matriz A:\n");
    scanf("%i %i", &a, &b);
    printf("\n Insira o tamanho da matriz B:\n");
    scanf("%i %i", &c, &d);
   
    K = (int**) malloc(a * sizeof (int*));
    for (int i = 0; i < a; i++) {
        K[i] = (int *) malloc(b * sizeof (int));
    }
    L = (int**) malloc(c * sizeof (int*));
    for (int x = 0; x < c; x++) {
        L[x] = (int *) malloc(d * sizeof (int));
    }

   

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            K[i][j] = 4;
        }
    }
    for (int x = 0; x < c; x++) {
        for (int y = 0; y < d; y++) {
            L[x][y] = 5;
        }
    }
    int **B = matriz(a, b, K, c, d, L);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%i\t", B[i][j]);
        }
        printf("\n");
    }



    return 0;
}
