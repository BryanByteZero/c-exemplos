// http://homepages.dcc.ufmg.br/~joaoreis/Site%20de%20tutoriais/c_int/strings.htm
#include <stdio.h>
#include <string.h>

int contachar(char string[], char letra) {
    int contador, tamanho, ocorrencia = 0;
    tamanho = strlen(string);
    for (contador = 1; contador <= tamanho; contador++) {
        if (string[contador] == letra) {
            ocorrencia++;        
        }
    }
    return (ocorrencia);
}

int main() {
    char *string[20];
    char letra[2];
    int nr;

    printf("Testando a função contachar()\n");
    printf("---------------------------\n");
    printf("\n");
    printf("Entre com a string :");
    scanf("%s", &string);
    printf("\n");
    printf("Entre com a letra :");
    scanf("%s", &letra);
    nr = contachar(string, letra[0]);
    printf("\n");
    printf("Contando o número de ocorrências : %d\n", nr);
    return (0);
}


