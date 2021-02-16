#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void exercicio1(int tam, char texto[tam]){
    int j=0;
    FILE *arq=NULL;
    arq = fopen("Ex1.txt","w"); //abrir o arquivo apenas para escrita
    if(arq == NULL) {
            printf("Problemas na ABERTURA, funcao exercicio 1\n");
            exit(1);
    }

    for(j=0;j<strlen(texto)-1;j++){
            if(texto[j]==' ') {//se ' ' insere no arquivo '#' apenas
                fputc('#',arq);
            }
            else{
                fputc(texto[j],arq); //caso contrário, insere o char da string
            }
            fputc('-',arq);
    }
    fputc(texto[j],arq); //insere o último char, já que o for acima vai até strlen(texto) - 1
                         //dessa forma evita inserir erradamente '-' no final do arquivo

    if(fclose(arq)!=0) {
            printf("Problemas no FECHAMENTO, funcao exercicio 1\n");           
            exit(1);
    }
}

int main(){
    char texto_gravar[151]="Universidade Tecnologica Federal do Parana";
    exercicio1(151,texto_gravar);  
    return(EXIT_SUCCESS);
}
