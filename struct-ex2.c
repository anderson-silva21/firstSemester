/*
2) Crie um programa utilizando struct para receber e armazenar 4
notas de 3 alunos identificados por nome, idade e media. A média
aritmética é calculada depois de preencher os cadastros. Em
seguida, mostre uma listagem do nome dos alunos, idade, média e,
depois, qual o aluno tem a maior média.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct notas_alunos {
    char nome[21];
    double notas[4];
    double media;
    int idade;
};

struct notas_alunos alunos[3];

int main() {
    for (int i = 0; i < 3; i++) {

        printf("Insira o nome do aluno\n");
        fgets(alunos[i].nome, sizeof (alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        printf("Insira a idade do aluno\n");
        scanf("%i", &alunos[i].idade);

        double soma = 0;
        
            for (int j = 0; j < 4; j++) {
                do {
                    printf("Insira a nota %i de %s\n", j, alunos[i].nome);
                    scanf("%lf", &alunos[i].notas[j]);
                } while (alunos[i].notas[j] < 0 || alunos[i].notas[j] > 10);
                setbuf(stdin, NULL);
                soma = soma + alunos[i].notas[j];
            }
        
        alunos[i].media = soma / 4;
        printf("A média de %s é %.2lf\n\n", alunos[i].nome, alunos[i].media);
        setbuf(stdin, NULL);
    }
    system("clear");
    printf("\n----------Listagem----------\n\n\n");
    for (int k = 0; k < 3; k++) {
        printf(" Nome:%s\n Média:%.2lf\n Idade:%d\n\n", alunos[k].nome, alunos[k].media, alunos[k].idade);
    }
    
    

    return 0;
}
