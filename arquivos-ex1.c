/*Faça outra função que receba por parâmetro uma
string, leia o arquivo gerado na função anterior para
preencher essa string, substituindo '#' por ' '. Mostre a
string final na tela.
"U-n-i-v-e-r-s-i-d-a-d-e- -T-e-c-n-o-l-o-g-i-c-a- -F-e-d-e-r-a-l- -d-o- -P-a-r-a-n-a"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void exercicio1(int tam, char texto[tam]) {
    int j = 0;
    FILE *arq = NULL;
    arq = fopen("Ex2.txt", "w"); //abrir o arquivo apenas para escrita
    if (arq == NULL) {
        printf("Problemas na ABERTURA, funcao exercicio 1\n");
        exit(1);
    }
    for (j = 0; j < strlen(texto) - 1; j++) {
        if (texto[j] == ' ') {//se ' ' insere no arquivo '#' apenas
            fputc(' ', arq);
        } else {
            fputc(texto[j], arq); //caso contrário, insere o char da string
        }
        fputc('-', arq);
    }
    fputc(texto[j], arq); //insere o último char, já que o for acima vai até strlen(texto) - 1
    //dessa forma evita inserir erradamente '-' no final do arquivo
    if (fclose(arq) != 0) {
        printf("Problemas no FECHAMENTO, funcao exercicio 1\n");
        exit(1);
    }
}

int main() {
    char texto_gravar[151] = "Universidade Tecnologica Federal do Parana";
    exercicio1(151, texto_gravar);
    return (EXIT_SUCCESS);
}
