/* Ejercicio 6.2 */

#include <stdio.h>

int main(void)
{
    int dividendo, divisor, resto = 0;

    printf("Introduzca dos números enteros no negativos.\n");
    printf("A. Introduzca el dividendo: ");
    scanf("%d", &dividendo);
    printf("B. Introduzca el divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("El mcd de los dos números es: %d\n", dividendo);
        return -1;
    }

    while ( divisor != 0) {
        resto = dividendo / divisor;
        dividendo = divisor;
        divisor = resto;
    }

    printf("El mcd de los dos números es: %d\n", divisor);

    return 0;
}