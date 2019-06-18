/*
2) Faça uma função que aloque dinamicamente uma matriz de reais, onde
as dimensões da matriz (n o de linhas e colunas) são passados por
parâmetro. A matriz gerada deve ser preenchida com números 1. A
função deve retornar essa matriz alocada para a função main().
 */

#include <stdio.h>
#include <stdlib.h>

int **functione(int a, int b) {
    int **K = NULL;
    K = (int**) malloc(a * sizeof (int *));
    for (int i = 0; i < a; i++) {
        K[i] = (int*) malloc(b * sizeof (int));
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            K[i][j] = 1;
        }
    }
    return K;
}

int main(int argc, char** argv) {
    int **vetor = NULL;
    int A = 0, B = 0;
    vetor = (int**) malloc(A * sizeof (int*));
    for(int i = 0;i<A;i++){
        vetor[i] = (int*) malloc(B*sizeof (int));
    }
   
            printf("Insira o tamnaho da matriz\n");
            scanf("%d %d", &A, &B);
           
           
    return (EXIT_SUCCESS);
}
