// http://pontov.com.br/site/cpp/46-conceitos-basicos/83-strings-em-c
#include <stdio.h>
 
int main(int, char **)
{
    char ola[] = "ola";
    char ola2[] = "ola";
 
    if(ola == ola2)
        printf("Iguais");
    else
       printf("Nao sao iguais");
 
    return 0;
}

/*
Se você entendeu tudo até aqui já deve imaginar qual vai ser a saída do programa
acima, se não, tente ler novamente e execute o programa. Muitos ficam surpresos
ao ver o programa imprimir "Não são iguais". Isto ocorre porque o if esta na 
verdade comparando dois ponteiros (lembre-se, arrays sem índice são ponteiros).
*/
