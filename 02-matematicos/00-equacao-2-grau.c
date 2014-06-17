//
//
//
// Compilando:
// gcc 00-equacao-2-grau.c -o executavel.run -lm
//
#include <math.h>
#include <stdio.h>

int main()
{
	float a;
	float b;
	float c;
	float delta;
	float raiz1;
	float raiz2;

	scanf("%f %f %f", &a, &b, &c);

    delta = b * b -4 * a * c;

    if (delta < 0) {
    	printf("Não possue raízes reais");
    } else {
        raiz1 = (-b + sqrt(delta)) / ( 2 * a );
        raiz2 = (-b - sqrt(delta)) / ( 2 * a );
        printf("As raízes da equação são: %f r %f", raiz1, raiz2);
    }
    
    return 0;
}

