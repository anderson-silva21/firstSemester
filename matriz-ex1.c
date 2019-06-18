/* 
Faça um programa que armazene os
valores inteiros recebidos do teclado em
uma matriz 3x4. Em seguida, o programa
deve mostrar os elementos da matriz
armazenada na tela.
 */

#include <stdio.h>
#include <stdlib.h>

int matriz[3][4];

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor [%i][%i]: ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i \t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
