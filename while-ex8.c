/*8) Faça um programa que calcule a média para 5 alunos,
sendo que cada aluno tem 2 notas (reais). O programa
somente deverá aceitar notas no intervalo fechado de 0 a 10,
solicitando nova digitação quando necessário.*/

#include <stdio.h>
#include <stdlib.h>

int media = 0;
int n1 = 0;
int n2 = 0;
int menu;

int main() {
    printf("Escolha o aluno que terá sua média calculada:\n <1> aluno1\n <2> aluno2\n <3> aluno3\n <4> aluno4\n <5> aluno5\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Insira as duas notas do aluno solicitado: \n");
            scanf("%i %i", &n1, &n2);
            if (n1 > 0 && n1 < 10 && n2 > 0 && n2 < 10) {
                media = (n1 + n2) / 2;
                printf("A média do aluno 1 é: %i", media);

            }
                case 2:
            printf("Insira as duas notas do aluno solicitado: \n");
            scanf("%i %i", &n1, &n2);
            if (n1 > 0 && n1 < 10 && n2 > 0 && n2 < 10) {
                media = (n1 + n2) / 2;
                printf("A média do aluno 2 é: %i", media);

            }
            
                case 3:
            printf("Insira as duas notas do aluno solicitado: \n");
            scanf("%i %i", &n1, &n2);
            if (n1 > 0 && n1 < 10 && n2 > 0 && n2 < 10) {
                media = (n1 + n2) / 2;
                printf("A média do aluno 3 é: %i", media);

            }
            
                case 4:
            printf("Insira as duas notas do aluno solicitado: \n");
            scanf("%i %i", &n1, &n2);
            if (n1 > 0 && n1 < 10 && n2 > 0 && n2 < 10) {
                media = (n1 + n2) / 2;
                printf("A média do aluno 4 é: %i", media);

            }
            
                case 5:
            printf("Insira as duas notas do aluno solicitado: \n");
            scanf("%i %i", &n1, &n2);
            if (n1 > 0 && n1 < 10 && n2 > 0 && n2 < 10) {
                media = (n1 + n2) / 2;
                printf("A média do aluno 5 é: %i", media);

            }
         
    }
    return 0;
}
