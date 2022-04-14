/* Ejercicio 4.3 */

#include <stdio.h>

int main(void)
{
    int numero, digito1, digito2;

    printf("Introduzca un número de dos dígitos: ");
    scanf("%d", &numero);

    /* Calcula los números */
    digito2 = numero % 10;
    digito1 = numero / 10;

    /* Imprime el número en orden inverso */
    printf("El número a la inversa es: %d%d\n", digito2, digito1);

    return 0;
}
