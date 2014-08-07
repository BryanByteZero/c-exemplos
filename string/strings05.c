// http://pontov.com.br/site/cpp/46-conceitos-basicos/83-strings-em-c
#include <stdio.h>
 
int main()
{
    const char *ola = "ola";
 
    printf(ola);
 
    return 0;
}

/*
Este código já é um pouco diferente do anterior, aqui não criamos um vetor de 
caracteres, e sim um ponteiro para uma região de memória constante do tipo char,
 trocando por miúdos, criamos um ponteiro que aponta para string. 

Mas onde diabos  foi parar a string? O compilador alocou um trecho de memória 
constante na seção de dados do código (uma variável global). Por isso usamos const,
pois esta string não deve ser modificada pelo código.

*/
