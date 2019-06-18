/*
2) Faça um programa que armazene o nome
e salário de 5 empregados. Em seguida
calcule um aumento de 8% nos salários e
exiba a nova folha de pagamentos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_buffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(int argc, char** argv) {
    char nome[5][21];
    double salario[5];
    double reajuste[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do funcionário:\n");
        fgets(nome[i], sizeof nome[i], stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        printf("Digite salario:\n");
        scanf("%lf", &salario[i]);
        reajuste[i] = salario[i] + (salario[i] * 0.08);
        limpar_buffer(); // remove o enter porque ele é considerado no char
    }
    for (int i = 0; i < 5; i++) {
        printf("%s com salario %.2lf\n\n", nome[i], salario[i]);
        printf("Reajuste de 8 por cento no salário de todos os funionários = %.2lf\n\n", reajuste[i]);
    }
    return 0;
}
