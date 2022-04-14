/* Ejercicio 4.4 */
#include <stdio.h>

int main(void)
{
    int numero, resto, digito1, digito2, digito3;

    printf("Introduzca un número de tres dígitos: ");
    scanf("%d", &numero);

    /* Calcula los números */
    resto = numero % 100;
    digito1 = numero / 100;
    digito2 = resto / 10;
    digito3 = resto % 10;

    /* Imprime el número en orden inverso */
     printf("El número a la inversa es: %d%d%d\n", digito3, digito2, digito1);

    return 0;
}
