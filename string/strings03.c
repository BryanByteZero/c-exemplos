#include <stdio.h>
#include <string.h>

int main() {
    char ola[4];

    ola[0] = 'o';
    ola[1] = 'l';
    ola[2] = 'a';
    ola[3] = 0;

    printf(ola);

    return 0;
}
/*
O código abaixo falha:

int main() {
    char ola[3];

    ola[0] = 'o';
    ola[1] = 'l';
    ola[2] = 'a';

    printf(ola);

    return 0;
}
*/

